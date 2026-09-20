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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYSESSIONSPACEREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYSESSIONSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * ModifySessionSpace请求参数结构体
                */
                class ModifySessionSpaceRequest : public AbstractModel
                {
                public:
                    ModifySessionSpaceRequest();
                    ~ModifySessionSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要修改的会话空间唯一标识。</p>
                     * @return SpaceId <p>需要修改的会话空间唯一标识。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>需要修改的会话空间唯一标识。</p>
                     * @param _spaceId <p>需要修改的会话空间唯一标识。</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>修改后的会话空间名称。</p>
                     * @return Name <p>修改后的会话空间名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>修改后的会话空间名称。</p>
                     * @param _name <p>修改后的会话空间名称。</p>
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
                     * 获取<p>修改后的会话空间描述。</p>
                     * @return Description <p>修改后的会话空间描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>修改后的会话空间描述。</p>
                     * @param _description <p>修改后的会话空间描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>需要修改的会话空间唯一标识。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>修改后的会话空间名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>修改后的会话空间描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYSESSIONSPACEREQUEST_H_
