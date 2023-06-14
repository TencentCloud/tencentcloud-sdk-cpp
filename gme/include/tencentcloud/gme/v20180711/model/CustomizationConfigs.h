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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CUSTOMIZATIONCONFIGS_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CUSTOMIZATIONCONFIGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 语音消息转文本热句模型配置
                */
                class CustomizationConfigs : public AbstractModel
                {
                public:
                    CustomizationConfigs();
                    ~CustomizationConfigs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用 ID，登录控制台创建应用得到的AppID
                     * @return BizId 应用 ID，登录控制台创建应用得到的AppID
                     * 
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用 ID，登录控制台创建应用得到的AppID
                     * @param _bizId 应用 ID，登录控制台创建应用得到的AppID
                     * 
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param _modelId 模型ID
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
                     * 获取模型状态，-1下线状态，1上线状态, 0训练中, -2训练失败, 3上线中, 4下线中
                     * @return ModelState 模型状态，-1下线状态，1上线状态, 0训练中, -2训练失败, 3上线中, 4下线中
                     * 
                     */
                    int64_t GetModelState() const;

                    /**
                     * 设置模型状态，-1下线状态，1上线状态, 0训练中, -2训练失败, 3上线中, 4下线中
                     * @param _modelState 模型状态，-1下线状态，1上线状态, 0训练中, -2训练失败, 3上线中, 4下线中
                     * 
                     */
                    void SetModelState(const int64_t& _modelState);

                    /**
                     * 判断参数 ModelState 是否已赋值
                     * @return ModelState 是否已赋值
                     * 
                     */
                    bool ModelStateHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * @return TextUrl 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * 
                     */
                    std::string GetTextUrl() const;

                    /**
                     * 设置文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * @param _textUrl 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * 
                     */
                    void SetTextUrl(const std::string& _textUrl);

                    /**
                     * 判断参数 TextUrl 是否已赋值
                     * @return TextUrl 是否已赋值
                     * 
                     */
                    bool TextUrlHasBeenSet() const;

                    /**
                     * 获取更新时间，11位时间戳
                     * @return UpdateTime 更新时间，11位时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，11位时间戳
                     * @param _updateTime 更新时间，11位时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 应用 ID，登录控制台创建应用得到的AppID
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型状态，-1下线状态，1上线状态, 0训练中, -2训练失败, 3上线中, 4下线中
                     */
                    int64_t m_modelState;
                    bool m_modelStateHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     */
                    std::string m_textUrl;
                    bool m_textUrlHasBeenSet;

                    /**
                     * 更新时间，11位时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CUSTOMIZATIONCONFIGS_H_
