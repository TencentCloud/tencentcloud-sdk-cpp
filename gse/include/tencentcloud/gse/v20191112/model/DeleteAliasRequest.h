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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DELETEALIASREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DELETEALIASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DeleteAlias请求参数结构体
                */
                class DeleteAliasRequest : public AbstractModel
                {
                public:
                    DeleteAliasRequest();
                    ~DeleteAliasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的别名ID
                     * @return AliasId 要删除的别名ID
                     * 
                     */
                    std::string GetAliasId() const;

                    /**
                     * 设置要删除的别名ID
                     * @param _aliasId 要删除的别名ID
                     * 
                     */
                    void SetAliasId(const std::string& _aliasId);

                    /**
                     * 判断参数 AliasId 是否已赋值
                     * @return AliasId 是否已赋值
                     * 
                     */
                    bool AliasIdHasBeenSet() const;

                private:

                    /**
                     * 要删除的别名ID
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DELETEALIASREQUEST_H_
