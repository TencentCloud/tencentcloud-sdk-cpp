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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERAKINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERAKINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UserAKInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeUserAKInfoList返回参数结构体
                */
                class DescribeUserAKInfoListResponse : public AbstractModel
                {
                public:
                    DescribeUserAKInfoListResponse();
                    ~DescribeUserAKInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号ak列表
                     * @return List 账号ak列表
                     * 
                     */
                    std::vector<UserAKInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取已勾选账号ak总数
                     * @return SelectedAKNum 已勾选账号ak总数
                     * 
                     */
                    int64_t GetSelectedAKNum() const;

                    /**
                     * 判断参数 SelectedAKNum 是否已赋值
                     * @return SelectedAKNum 是否已赋值
                     * 
                     */
                    bool SelectedAKNumHasBeenSet() const;

                    /**
                     * 获取ak总数
                     * @return Count ak总数
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
                     * 账号ak列表
                     */
                    std::vector<UserAKInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 已勾选账号ak总数
                     */
                    int64_t m_selectedAKNum;
                    bool m_selectedAKNumHasBeenSet;

                    /**
                     * ak总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEUSERAKINFOLISTRESPONSE_H_
