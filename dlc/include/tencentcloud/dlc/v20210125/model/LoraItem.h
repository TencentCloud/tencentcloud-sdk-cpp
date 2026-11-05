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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LORAITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LORAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 单个 LoRA Adapter（LoRA 模型版本）绑定项.
                */
                class LoraItem : public AbstractModel
                {
                public:
                    LoraItem();
                    ~LoraItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型版本 UID</p>
                     * @return ModelVersionUid <p>模型版本 UID</p>
                     * 
                     */
                    std::string GetModelVersionUid() const;

                    /**
                     * 设置<p>模型版本 UID</p>
                     * @param _modelVersionUid <p>模型版本 UID</p>
                     * 
                     */
                    void SetModelVersionUid(const std::string& _modelVersionUid);

                    /**
                     * 判断参数 ModelVersionUid 是否已赋值
                     * @return ModelVersionUid 是否已赋值
                     * 
                     */
                    bool ModelVersionUidHasBeenSet() const;

                    /**
                     * 获取<p>模型 UID</p>
                     * @return ModelUid <p>模型 UID</p>
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 设置<p>模型 UID</p>
                     * @param _modelUid <p>模型 UID</p>
                     * 
                     */
                    void SetModelUid(const std::string& _modelUid);

                    /**
                     * 判断参数 ModelUid 是否已赋值
                     * @return ModelUid 是否已赋值
                     * 
                     */
                    bool ModelUidHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
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
                     * 获取<p>模型版本</p>
                     * @return Version <p>模型版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>模型版本</p>
                     * @param _version <p>模型版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>别名</p>
                     * @return Alias <p>别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>别名</p>
                     * @param _alias <p>别名</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>Lora Rank</p>
                     * @return AdapterRank <p>Lora Rank</p>
                     * 
                     */
                    int64_t GetAdapterRank() const;

                    /**
                     * 设置<p>Lora Rank</p>
                     * @param _adapterRank <p>Lora Rank</p>
                     * 
                     */
                    void SetAdapterRank(const int64_t& _adapterRank);

                    /**
                     * 判断参数 AdapterRank 是否已赋值
                     * @return AdapterRank 是否已赋值
                     * 
                     */
                    bool AdapterRankHasBeenSet() const;

                private:

                    /**
                     * <p>模型版本 UID</p>
                     */
                    std::string m_modelVersionUid;
                    bool m_modelVersionUidHasBeenSet;

                    /**
                     * <p>模型 UID</p>
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>Lora Rank</p>
                     */
                    int64_t m_adapterRank;
                    bool m_adapterRankHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LORAITEM_H_
