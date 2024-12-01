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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MAINDISEASEHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MAINDISEASEHISTORYBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/NeglistBlock.h>
#include <tencentcloud/mrs/v20200910/model/PoslistBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 既往史
                */
                class MainDiseaseHistoryBlock : public AbstractModel
                {
                public:
                    MainDiseaseHistoryBlock();
                    ~MainDiseaseHistoryBlock() = default;
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
                    bool GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

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
                     * 获取否定列表
                     * @return Neglist 否定列表
                     * 
                     */
                    NeglistBlock GetNeglist() const;

                    /**
                     * 设置否定列表
                     * @param _neglist 否定列表
                     * 
                     */
                    void SetNeglist(const NeglistBlock& _neglist);

                    /**
                     * 判断参数 Neglist 是否已赋值
                     * @return Neglist 是否已赋值
                     * 
                     */
                    bool NeglistHasBeenSet() const;

                    /**
                     * 获取肯定列表
                     * @return Poslist 肯定列表
                     * 
                     */
                    PoslistBlock GetPoslist() const;

                    /**
                     * 设置肯定列表
                     * @param _poslist 肯定列表
                     * 
                     */
                    void SetPoslist(const PoslistBlock& _poslist);

                    /**
                     * 判断参数 Poslist 是否已赋值
                     * @return Poslist 是否已赋值
                     * 
                     */
                    bool PoslistHasBeenSet() const;

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
                    bool m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 对外输出值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 否定列表
                     */
                    NeglistBlock m_neglist;
                    bool m_neglistHasBeenSet;

                    /**
                     * 肯定列表
                     */
                    PoslistBlock m_poslist;
                    bool m_poslistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MAINDISEASEHISTORYBLOCK_H_
