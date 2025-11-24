/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDLCDELIVERSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDLCDELIVERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcDeliverInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeDlcDelivers返回参数结构体
                */
                class DescribeDlcDeliversResponse : public AbstractModel
                {
                public:
                    DescribeDlcDeliversResponse();
                    ~DescribeDlcDeliversResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警渠道回调配置列表。
                     * @return Infos 告警渠道回调配置列表。
                     * 
                     */
                    std::vector<DlcDeliverInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取符合条件的通知内容配置总数。
                     * @return Total 符合条件的通知内容配置总数。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 告警渠道回调配置列表。
                     */
                    std::vector<DlcDeliverInfo> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * 符合条件的通知内容配置总数。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDLCDELIVERSRESPONSE_H_
