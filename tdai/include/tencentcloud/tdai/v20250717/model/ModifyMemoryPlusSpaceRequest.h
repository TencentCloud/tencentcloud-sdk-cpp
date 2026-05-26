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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_MODIFYMEMORYPLUSSPACEREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_MODIFYMEMORYPLUSSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * ModifyMemoryPlusSpace请求参数结构体
                */
                class ModifyMemoryPlusSpaceRequest : public AbstractModel
                {
                public:
                    ModifyMemoryPlusSpaceRequest();
                    ~ModifyMemoryPlusSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定需要修改的 Memory 实例 ID。</p>
                     * @return SpaceId <p>指定需要修改的 Memory 实例 ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>指定需要修改的 Memory 实例 ID。</p>
                     * @param _spaceId <p>指定需要修改的 Memory 实例 ID。</p>
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
                     * 获取<p>指定修改后的实例名称。支持 60 个字符内 的中英文、数字、中划线（-）及下划线（_）。</p>
                     * @return Name <p>指定修改后的实例名称。支持 60 个字符内 的中英文、数字、中划线（-）及下划线（_）。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>指定修改后的实例名称。支持 60 个字符内 的中英文、数字、中划线（-）及下划线（_）。</p>
                     * @param _name <p>指定修改后的实例名称。支持 60 个字符内 的中英文、数字、中划线（-）及下划线（_）。</p>
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
                     * 获取<p>指定修改后的实例描述。最多支持 200 个字符。</p>
                     * @return Description <p>指定修改后的实例描述。最多支持 200 个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>指定修改后的实例描述。最多支持 200 个字符。</p>
                     * @param _description <p>指定修改后的实例描述。最多支持 200 个字符。</p>
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
                     * <p>指定需要修改的 Memory 实例 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>指定修改后的实例名称。支持 60 个字符内 的中英文、数字、中划线（-）及下划线（_）。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>指定修改后的实例描述。最多支持 200 个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_MODIFYMEMORYPLUSSPACEREQUEST_H_
