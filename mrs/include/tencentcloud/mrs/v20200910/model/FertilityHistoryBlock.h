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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FERTILITYHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FERTILITYHISTORYBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 婚育史
                */
                class FertilityHistoryBlock : public AbstractModel
                {
                public:
                    FertilityHistoryBlock();
                    ~FertilityHistoryBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取原文
                     * @return Src 原文
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
                     * @param _src 原文
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取归一化值
                     * @return Norm 归一化值
                     * 
                     */
                    std::string GetNorm() const;

                    /**
                     * 设置归一化值
                     * @param _norm 归一化值
                     * 
                     */
                    void SetNorm(const std::string& _norm);

                    /**
                     * 判断参数 Norm 是否已赋值
                     * @return Norm 是否已赋值
                     * 
                     */
                    bool NormHasBeenSet() const;

                    /**
                     * 获取对外输出值
                     * @return Value 对外输出值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置对外输出值
                     * @param _value 对外输出值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取妊娠次数
                     * @return PregCount 妊娠次数
                     * 
                     */
                    std::string GetPregCount() const;

                    /**
                     * 设置妊娠次数
                     * @param _pregCount 妊娠次数
                     * 
                     */
                    void SetPregCount(const std::string& _pregCount);

                    /**
                     * 判断参数 PregCount 是否已赋值
                     * @return PregCount 是否已赋值
                     * 
                     */
                    bool PregCountHasBeenSet() const;

                    /**
                     * 获取生产次数
                     * @return ProduCount 生产次数
                     * 
                     */
                    std::string GetProduCount() const;

                    /**
                     * 设置生产次数
                     * @param _produCount 生产次数
                     * 
                     */
                    void SetProduCount(const std::string& _produCount);

                    /**
                     * 判断参数 ProduCount 是否已赋值
                     * @return ProduCount 是否已赋值
                     * 
                     */
                    bool ProduCountHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 归一化值
                     */
                    std::string m_norm;
                    bool m_normHasBeenSet;

                    /**
                     * 对外输出值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 妊娠次数
                     */
                    std::string m_pregCount;
                    bool m_pregCountHasBeenSet;

                    /**
                     * 生产次数
                     */
                    std::string m_produCount;
                    bool m_produCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FERTILITYHISTORYBLOCK_H_
