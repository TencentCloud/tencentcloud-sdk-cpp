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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_INOUTPUTUCBRULEENTRY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_INOUTPUTUCBRULEENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/UCBEntryValue.h>
#include <tencentcloud/waf/v20180125/model/Area.h>
#include <tencentcloud/waf/v20180125/model/ParamCompareList.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 自定义规则UCB的Rule生效条件
                */
                class InOutputUCBRuleEntry : public AbstractModel
                {
                public:
                    InOutputUCBRuleEntry();
                    ~InOutputUCBRuleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取键
                     * @return Key 键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置键
                     * @param _key 键
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取操作符
                     * @return Op 操作符
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置操作符
                     * @param _op 操作符
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    UCBEntryValue GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
                     * 
                     */
                    void SetValue(const UCBEntryValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取可选的补充操作符
                     * @return OpOp 可选的补充操作符
                     * 
                     */
                    std::string GetOpOp() const;

                    /**
                     * 设置可选的补充操作符
                     * @param _opOp 可选的补充操作符
                     * 
                     */
                    void SetOpOp(const std::string& _opOp);

                    /**
                     * 判断参数 OpOp 是否已赋值
                     * @return OpOp 是否已赋值
                     * 
                     */
                    bool OpOpHasBeenSet() const;

                    /**
                     * 获取可选的补充参数
                     * @return OpArg 可选的补充参数
                     * 
                     */
                    std::vector<std::string> GetOpArg() const;

                    /**
                     * 设置可选的补充参数
                     * @param _opArg 可选的补充参数
                     * 
                     */
                    void SetOpArg(const std::vector<std::string>& _opArg);

                    /**
                     * 判断参数 OpArg 是否已赋值
                     * @return OpArg 是否已赋值
                     * 
                     */
                    bool OpArgHasBeenSet() const;

                    /**
                     * 获取可选的补充值
                     * @return OpValue 可选的补充值
                     * 
                     */
                    double GetOpValue() const;

                    /**
                     * 设置可选的补充值
                     * @param _opValue 可选的补充值
                     * 
                     */
                    void SetOpValue(const double& _opValue);

                    /**
                     * 判断参数 OpValue 是否已赋值
                     * @return OpValue 是否已赋值
                     * 
                     */
                    bool OpValueHasBeenSet() const;

                    /**
                     * 获取Header参数值时使用
                     * @return Name Header参数值时使用
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Header参数值时使用
                     * @param _name Header参数值时使用
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
                     * 获取区域选择
                     * @return Areas 区域选择
                     * 
                     */
                    std::vector<Area> GetAreas() const;

                    /**
                     * 设置区域选择
                     * @param _areas 区域选择
                     * 
                     */
                    void SetAreas(const std::vector<Area>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                    /**
                     * 获取语言环境
                     * @return Lang 语言环境
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置语言环境
                     * @param _lang 语言环境
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取参数匹配
                     * @return ParamCompareList 参数匹配
                     * 
                     */
                    std::vector<ParamCompareList> GetParamCompareList() const;

                    /**
                     * 设置参数匹配
                     * @param _paramCompareList 参数匹配
                     * 
                     */
                    void SetParamCompareList(const std::vector<ParamCompareList>& _paramCompareList);

                    /**
                     * 判断参数 ParamCompareList 是否已赋值
                     * @return ParamCompareList 是否已赋值
                     * 
                     */
                    bool ParamCompareListHasBeenSet() const;

                private:

                    /**
                     * 键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 操作符
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 值
                     */
                    UCBEntryValue m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 可选的补充操作符
                     */
                    std::string m_opOp;
                    bool m_opOpHasBeenSet;

                    /**
                     * 可选的补充参数
                     */
                    std::vector<std::string> m_opArg;
                    bool m_opArgHasBeenSet;

                    /**
                     * 可选的补充值
                     */
                    double m_opValue;
                    bool m_opValueHasBeenSet;

                    /**
                     * Header参数值时使用
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 区域选择
                     */
                    std::vector<Area> m_areas;
                    bool m_areasHasBeenSet;

                    /**
                     * 语言环境
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 参数匹配
                     */
                    std::vector<ParamCompareList> m_paramCompareList;
                    bool m_paramCompareListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_INOUTPUTUCBRULEENTRY_H_
