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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MOVECLASSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MOVECLASSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * MoveClass请求参数结构体
                */
                class MoveClassRequest : public AbstractModel
                {
                public:
                    MoveClassRequest();
                    ~MoveClassRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取归属者。
                     * @return Owner 归属者。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置归属者。
                     * @param _owner 归属者。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取源分类路径。
                     * @return SourceClassPath 源分类路径。
                     * 
                     */
                    std::string GetSourceClassPath() const;

                    /**
                     * 设置源分类路径。
                     * @param _sourceClassPath 源分类路径。
                     * 
                     */
                    void SetSourceClassPath(const std::string& _sourceClassPath);

                    /**
                     * 判断参数 SourceClassPath 是否已赋值
                     * @return SourceClassPath 是否已赋值
                     * 
                     */
                    bool SourceClassPathHasBeenSet() const;

                    /**
                     * 获取目标分类路径。
                     * @return DestinationClassPath 目标分类路径。
                     * 
                     */
                    std::string GetDestinationClassPath() const;

                    /**
                     * 设置目标分类路径。
                     * @param _destinationClassPath 目标分类路径。
                     * 
                     */
                    void SetDestinationClassPath(const std::string& _destinationClassPath);

                    /**
                     * 判断参数 DestinationClassPath 是否已赋值
                     * @return DestinationClassPath 是否已赋值
                     * 
                     */
                    bool DestinationClassPathHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @param _operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 归属者。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 源分类路径。
                     */
                    std::string m_sourceClassPath;
                    bool m_sourceClassPathHasBeenSet;

                    /**
                     * 目标分类路径。
                     */
                    std::string m_destinationClassPath;
                    bool m_destinationClassPathHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MOVECLASSREQUEST_H_
