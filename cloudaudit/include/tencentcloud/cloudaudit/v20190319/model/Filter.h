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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_FILTER_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/ResourceField.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * 跟踪集数据投递筛选条件
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源筛选条件
                     * @return ResourceFields 资源筛选条件
                     * 
                     */
                    std::vector<ResourceField> GetResourceFields() const;

                    /**
                     * 设置资源筛选条件
                     * @param _resourceFields 资源筛选条件
                     * 
                     */
                    void SetResourceFields(const std::vector<ResourceField>& _resourceFields);

                    /**
                     * 判断参数 ResourceFields 是否已赋值
                     * @return ResourceFields 是否已赋值
                     * 
                     */
                    bool ResourceFieldsHasBeenSet() const;

                private:

                    /**
                     * 资源筛选条件
                     */
                    std::vector<ResourceField> m_resourceFields;
                    bool m_resourceFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_FILTER_H_
