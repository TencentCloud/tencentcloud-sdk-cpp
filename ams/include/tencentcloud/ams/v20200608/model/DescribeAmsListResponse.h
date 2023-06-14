/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAMSLISTRESPONSE_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAMSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/AmsDetailInfo.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * DescribeAmsList返回参数结构体
                */
                class DescribeAmsListResponse : public AbstractModel
                {
                public:
                    DescribeAmsListResponse();
                    ~DescribeAmsListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回列表数据----非必选，该参数暂未对外开放
                     * @return AmsDetailSet 返回列表数据----非必选，该参数暂未对外开放
                     * 
                     */
                    std::vector<AmsDetailInfo> GetAmsDetailSet() const;

                    /**
                     * 判断参数 AmsDetailSet 是否已赋值
                     * @return AmsDetailSet 是否已赋值
                     * 
                     */
                    bool AmsDetailSetHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return Total 总条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取分页 token
                     * @return PageToken 分页 token
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 判断参数 PageToken 是否已赋值
                     * @return PageToken 是否已赋值
                     * 
                     */
                    bool PageTokenHasBeenSet() const;

                private:

                    /**
                     * 返回列表数据----非必选，该参数暂未对外开放
                     */
                    std::vector<AmsDetailInfo> m_amsDetailSet;
                    bool m_amsDetailSetHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 分页 token
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAMSLISTRESPONSE_H_
