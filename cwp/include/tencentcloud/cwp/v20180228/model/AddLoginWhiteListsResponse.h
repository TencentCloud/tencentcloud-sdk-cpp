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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/DuplicateHosts.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * AddLoginWhiteLists返回参数结构体
                */
                class AddLoginWhiteListsResponse : public AbstractModel
                {
                public:
                    AddLoginWhiteListsResponse();
                    ~AddLoginWhiteListsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取重复添加的提示列表
                     * @return DuplicateHosts 重复添加的提示列表
                     * 
                     */
                    std::vector<DuplicateHosts> GetDuplicateHosts() const;

                    /**
                     * 判断参数 DuplicateHosts 是否已赋值
                     * @return DuplicateHosts 是否已赋值
                     * 
                     */
                    bool DuplicateHostsHasBeenSet() const;

                private:

                    /**
                     * 重复添加的提示列表
                     */
                    std::vector<DuplicateHosts> m_duplicateHosts;
                    bool m_duplicateHostsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSRESPONSE_H_
