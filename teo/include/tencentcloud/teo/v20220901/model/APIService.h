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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_APISERVICE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_APISERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * API 服务配置。
                */
                class APIService : public AbstractModel
                {
                public:
                    APIService();
                    ~APIService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API 服务 ID。
                     * @return Id API 服务 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置API 服务 ID。
                     * @param _id API 服务 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取API 服务名称。
                     * @return Name API 服务名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API 服务名称。
                     * @param _name API 服务名称。
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
                     * 获取基础路径。
                     * @return BasePath 基础路径。
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置基础路径。
                     * @param _basePath 基础路径。
                     * 
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     * 
                     */
                    bool BasePathHasBeenSet() const;

                private:

                    /**
                     * API 服务 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * API 服务名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 基础路径。
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APISERVICE_H_
