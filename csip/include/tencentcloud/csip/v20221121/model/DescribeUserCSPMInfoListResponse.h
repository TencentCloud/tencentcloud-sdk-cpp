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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERCSPMINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERCSPMINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UserCSPMInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeUserCSPMInfoList返回参数结构体
                */
                class DescribeUserCSPMInfoListResponse : public AbstractModel
                {
                public:
                    DescribeUserCSPMInfoListResponse();
                    ~DescribeUserCSPMInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号CSPM列表
                     * @return List 账号CSPM列表
                     * 
                     */
                    std::vector<UserCSPMInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取已勾选账号CSPM配额总数
                     * @return SelectedCSPMNum 已勾选账号CSPM配额总数
                     * 
                     */
                    int64_t GetSelectedCSPMNum() const;

                    /**
                     * 判断参数 SelectedCSPMNum 是否已赋值
                     * @return SelectedCSPMNum 是否已赋值
                     * 
                     */
                    bool SelectedCSPMNumHasBeenSet() const;

                    /**
                     * 获取账号总数
                     * @return Count 账号总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 账号CSPM列表
                     */
                    std::vector<UserCSPMInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 已勾选账号CSPM配额总数
                     */
                    int64_t m_selectedCSPMNum;
                    bool m_selectedCSPMNumHasBeenSet;

                    /**
                     * 账号总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERCSPMINFOLISTRESPONSE_H_
