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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_UPDATESUBACCOUNTLINUXUSERINFOREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_UPDATESUBACCOUNTLINUXUSERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/SubAccountInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * UpdateSubAccountLinuxUserInfo请求参数结构体
                */
                class UpdateSubAccountLinuxUserInfoRequest : public AbstractModel
                {
                public:
                    UpdateSubAccountLinuxUserInfoRequest();
                    ~UpdateSubAccountLinuxUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子账号信息列表
                     * @return SubAccountList 子账号信息列表
                     * 
                     */
                    std::vector<SubAccountInfo> GetSubAccountList() const;

                    /**
                     * 设置子账号信息列表
                     * @param _subAccountList 子账号信息列表
                     * 
                     */
                    void SetSubAccountList(const std::vector<SubAccountInfo>& _subAccountList);

                    /**
                     * 判断参数 SubAccountList 是否已赋值
                     * @return SubAccountList 是否已赋值
                     * 
                     */
                    bool SubAccountListHasBeenSet() const;

                private:

                    /**
                     * 子账号信息列表
                     */
                    std::vector<SubAccountInfo> m_subAccountList;
                    bool m_subAccountListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_UPDATESUBACCOUNTLINUXUSERINFOREQUEST_H_
