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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_PACKSPEC_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_PACKSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/CodePart.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 层级码配置
                */
                class PackSpec : public AbstractModel
                {
                public:
                    PackSpec();
                    ~PackSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取层级
                     * @return Level 层级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置层级
                     * @param _level 层级
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取比例
                     * @return Rate 比例
                     * 
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置比例
                     * @param _rate 比例
                     * 
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Amount 数量
                     * 
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 设置数量
                     * @param _amount 数量
                     * 
                     */
                    void SetAmount(const uint64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取码规则ID
                     * @return CustomId 码规则ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置码规则ID
                     * @param _customId 码规则ID
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取码段配置
                     * @return CodeParts 码段配置
                     * 
                     */
                    std::vector<CodePart> GetCodeParts() const;

                    /**
                     * 设置码段配置
                     * @param _codeParts 码段配置
                     * 
                     */
                    void SetCodeParts(const std::vector<CodePart>& _codeParts);

                    /**
                     * 判断参数 CodeParts 是否已赋值
                     * @return CodeParts 是否已赋值
                     * 
                     */
                    bool CodePartsHasBeenSet() const;

                    /**
                     * 获取包装单位
                     * @return Unit 包装单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置包装单位
                     * @param _unit 包装单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取场景值
                     * @return SceneCode 场景值
                     * 
                     */
                    int64_t GetSceneCode() const;

                    /**
                     * 设置场景值
                     * @param _sceneCode 场景值
                     * 
                     */
                    void SetSceneCode(const int64_t& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                private:

                    /**
                     * 层级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 比例
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 数量
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 码规则ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 码段配置
                     */
                    std::vector<CodePart> m_codeParts;
                    bool m_codePartsHasBeenSet;

                    /**
                     * 包装单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 场景值
                     */
                    int64_t m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_PACKSPEC_H_
