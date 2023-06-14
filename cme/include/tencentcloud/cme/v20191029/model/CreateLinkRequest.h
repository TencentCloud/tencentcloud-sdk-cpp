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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CREATELINKREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CREATELINKREQUEST_H_

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
                * CreateLink请求参数结构体
                */
                class CreateLinkRequest : public AbstractModel
                {
                public:
                    CreateLinkRequest();
                    ~CreateLinkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
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
                     * 获取链接类型，可取值有:
<li>CLASS: 分类链接；</li>
<li> MATERIAL：媒体文件链接。</li>
                     * @return Type 链接类型，可取值有:
<li>CLASS: 分类链接；</li>
<li> MATERIAL：媒体文件链接。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置链接类型，可取值有:
<li>CLASS: 分类链接；</li>
<li> MATERIAL：媒体文件链接。</li>
                     * @param _type 链接类型，可取值有:
<li>CLASS: 分类链接；</li>
<li> MATERIAL：媒体文件链接。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取链接名称，不能超过30个字符。
                     * @return Name 链接名称，不能超过30个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置链接名称，不能超过30个字符。
                     * @param _name 链接名称，不能超过30个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取链接归属者。
                     * @return Owner 链接归属者。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置链接归属者。
                     * @param _owner 链接归属者。
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
                     * 获取目标资源Id。可取值有：
<li>当 Type 为 MATERIAL 时填媒体 ID；</li>
<li>当 Type 为 CLASS 时填写分类路径。</li>
                     * @return DestinationId 目标资源Id。可取值有：
<li>当 Type 为 MATERIAL 时填媒体 ID；</li>
<li>当 Type 为 CLASS 时填写分类路径。</li>
                     * 
                     */
                    std::string GetDestinationId() const;

                    /**
                     * 设置目标资源Id。可取值有：
<li>当 Type 为 MATERIAL 时填媒体 ID；</li>
<li>当 Type 为 CLASS 时填写分类路径。</li>
                     * @param _destinationId 目标资源Id。可取值有：
<li>当 Type 为 MATERIAL 时填媒体 ID；</li>
<li>当 Type 为 CLASS 时填写分类路径。</li>
                     * 
                     */
                    void SetDestinationId(const std::string& _destinationId);

                    /**
                     * 判断参数 DestinationId 是否已赋值
                     * @return DestinationId 是否已赋值
                     * 
                     */
                    bool DestinationIdHasBeenSet() const;

                    /**
                     * 获取目标资源归属者。
                     * @return DestinationOwner 目标资源归属者。
                     * 
                     */
                    Entity GetDestinationOwner() const;

                    /**
                     * 设置目标资源归属者。
                     * @param _destinationOwner 目标资源归属者。
                     * 
                     */
                    void SetDestinationOwner(const Entity& _destinationOwner);

                    /**
                     * 判断参数 DestinationOwner 是否已赋值
                     * @return DestinationOwner 是否已赋值
                     * 
                     */
                    bool DestinationOwnerHasBeenSet() const;

                    /**
                     * 获取链接的分类路径，如填"/a/b"则代表链接属于该分类路径，不填则默认为根路径。
                     * @return ClassPath 链接的分类路径，如填"/a/b"则代表链接属于该分类路径，不填则默认为根路径。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置链接的分类路径，如填"/a/b"则代表链接属于该分类路径，不填则默认为根路径。
                     * @param _classPath 链接的分类路径，如填"/a/b"则代表链接属于该分类路径，不填则默认为根路径。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以创建任意源及目标资源的链接。如果指定操作者，则操作者必须对源资源有读权限，对目标媒体有写权限。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以创建任意源及目标资源的链接。如果指定操作者，则操作者必须对源资源有读权限，对目标媒体有写权限。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以创建任意源及目标资源的链接。如果指定操作者，则操作者必须对源资源有读权限，对目标媒体有写权限。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以创建任意源及目标资源的链接。如果指定操作者，则操作者必须对源资源有读权限，对目标媒体有写权限。
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
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 链接类型，可取值有:
<li>CLASS: 分类链接；</li>
<li> MATERIAL：媒体文件链接。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 链接名称，不能超过30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 链接归属者。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 目标资源Id。可取值有：
<li>当 Type 为 MATERIAL 时填媒体 ID；</li>
<li>当 Type 为 CLASS 时填写分类路径。</li>
                     */
                    std::string m_destinationId;
                    bool m_destinationIdHasBeenSet;

                    /**
                     * 目标资源归属者。
                     */
                    Entity m_destinationOwner;
                    bool m_destinationOwnerHasBeenSet;

                    /**
                     * 链接的分类路径，如填"/a/b"则代表链接属于该分类路径，不填则默认为根路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以创建任意源及目标资源的链接。如果指定操作者，则操作者必须对源资源有读权限，对目标媒体有写权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CREATELINKREQUEST_H_
