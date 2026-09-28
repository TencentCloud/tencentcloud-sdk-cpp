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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BUILDARTIFACTINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BUILDARTIFACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 构建产物信息
                */
                class BuildArtifactInfo : public AbstractModel
                {
                public:
                    BuildArtifactInfo();
                    ~BuildArtifactInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产物类型</p>
                     * @return Type <p>产物类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>产物类型</p>
                     * @param _type <p>产物类型</p>
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
                     * 获取<p>产物名称</p>
                     * @return Name <p>产物名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>产物名称</p>
                     * @param _name <p>产物名称</p>
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
                     * 获取<p>产物状态</p>
                     * @return Status <p>产物状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>产物状态</p>
                     * @param _status <p>产物状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>扩展详情 Json</p>
                     * @return ContentJson <p>扩展详情 Json</p>
                     * 
                     */
                    std::string GetContentJson() const;

                    /**
                     * 设置<p>扩展详情 Json</p>
                     * @param _contentJson <p>扩展详情 Json</p>
                     * 
                     */
                    void SetContentJson(const std::string& _contentJson);

                    /**
                     * 判断参数 ContentJson 是否已赋值
                     * @return ContentJson 是否已赋值
                     * 
                     */
                    bool ContentJsonHasBeenSet() const;

                private:

                    /**
                     * <p>产物类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>产物名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>产物状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>扩展详情 Json</p>
                     */
                    std::string m_contentJson;
                    bool m_contentJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BUILDARTIFACTINFO_H_
