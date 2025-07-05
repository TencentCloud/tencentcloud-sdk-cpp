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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_REMOVECHCASSISTVPCREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_REMOVECHCASSISTVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RemoveChcAssistVpc请求参数结构体
                */
                class RemoveChcAssistVpcRequest : public AbstractModel
                {
                public:
                    RemoveChcAssistVpcRequest();
                    ~RemoveChcAssistVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CHC物理服务器Id。
                     * @return ChcIds CHC物理服务器Id。
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置CHC物理服务器Id。
                     * @param _chcIds CHC物理服务器Id。
                     * 
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     * 
                     */
                    bool ChcIdsHasBeenSet() const;

                private:

                    /**
                     * CHC物理服务器Id。
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_REMOVECHCASSISTVPCREQUEST_H_
