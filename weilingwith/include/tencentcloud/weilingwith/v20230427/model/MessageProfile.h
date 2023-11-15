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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MESSAGEPROFILE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MESSAGEPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 上报消息概要
                */
                class MessageProfile : public AbstractModel
                {
                public:
                    MessageProfile();
                    ~MessageProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用类型
                     * @return AppType 应用类型
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型
                     * @param _appType 应用类型
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取模型Id
                     * @return ModelId 模型Id
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型Id
                     * @param _modelId 模型Id
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取设备类型
                     * @return PoiCode 设备类型
                     * 
                     */
                    std::string GetPoiCode() const;

                    /**
                     * 设置设备类型
                     * @param _poiCode 设备类型
                     * 
                     */
                    void SetPoiCode(const std::string& _poiCode);

                    /**
                     * 判断参数 PoiCode 是否已赋值
                     * @return PoiCode 是否已赋值
                     * 
                     */
                    bool PoiCodeHasBeenSet() const;

                private:

                    /**
                     * 应用类型
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 模型Id
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_poiCode;
                    bool m_poiCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MESSAGEPROFILE_H_
