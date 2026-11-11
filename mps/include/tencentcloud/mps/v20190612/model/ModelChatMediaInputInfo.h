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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATMEDIAINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATMEDIAINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModelChatUrlInputInfo.h>
#include <tencentcloud/mps/v20190612/model/ModelChatDataInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 多模态理解媒体文件输入
                */
                class ModelChatMediaInputInfo : public AbstractModel
                {
                public:
                    ModelChatMediaInputInfo();
                    ~ModelChatMediaInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入类型</p><p>枚举值：</p><ul><li>URL： Url输入</li><li>DATA： Base64输入</li></ul>
                     * @return Type <p>输入类型</p><p>枚举值：</p><ul><li>URL： Url输入</li><li>DATA： Base64输入</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>输入类型</p><p>枚举值：</p><ul><li>URL： Url输入</li><li>DATA： Base64输入</li></ul>
                     * @param _type <p>输入类型</p><p>枚举值：</p><ul><li>URL： Url输入</li><li>DATA： Base64输入</li></ul>
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
                     * 获取<p>URL输入配置</p>
                     * @return UrlInputInfo <p>URL输入配置</p>
                     * 
                     */
                    ModelChatUrlInputInfo GetUrlInputInfo() const;

                    /**
                     * 设置<p>URL输入配置</p>
                     * @param _urlInputInfo <p>URL输入配置</p>
                     * 
                     */
                    void SetUrlInputInfo(const ModelChatUrlInputInfo& _urlInputInfo);

                    /**
                     * 判断参数 UrlInputInfo 是否已赋值
                     * @return UrlInputInfo 是否已赋值
                     * 
                     */
                    bool UrlInputInfoHasBeenSet() const;

                    /**
                     * 获取<p>Base64输入配置</p>
                     * @return DataInputInfo <p>Base64输入配置</p>
                     * 
                     */
                    ModelChatDataInputInfo GetDataInputInfo() const;

                    /**
                     * 设置<p>Base64输入配置</p>
                     * @param _dataInputInfo <p>Base64输入配置</p>
                     * 
                     */
                    void SetDataInputInfo(const ModelChatDataInputInfo& _dataInputInfo);

                    /**
                     * 判断参数 DataInputInfo 是否已赋值
                     * @return DataInputInfo 是否已赋值
                     * 
                     */
                    bool DataInputInfoHasBeenSet() const;

                private:

                    /**
                     * <p>输入类型</p><p>枚举值：</p><ul><li>URL： Url输入</li><li>DATA： Base64输入</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>URL输入配置</p>
                     */
                    ModelChatUrlInputInfo m_urlInputInfo;
                    bool m_urlInputInfoHasBeenSet;

                    /**
                     * <p>Base64输入配置</p>
                     */
                    ModelChatDataInputInfo m_dataInputInfo;
                    bool m_dataInputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATMEDIAINPUTINFO_H_
