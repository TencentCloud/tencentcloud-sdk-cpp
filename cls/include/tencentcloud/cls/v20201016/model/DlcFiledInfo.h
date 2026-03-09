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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCFILEDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCFILEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 数据湖计算服务（Data Lake Compute，简称DLC）数据字段配置信息
                */
                class DlcFiledInfo : public AbstractModel
                {
                public:
                    DlcFiledInfo();
                    ~DlcFiledInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>cls日志中的字段名</p>
                     * @return ClsField <p>cls日志中的字段名</p>
                     * 
                     */
                    std::string GetClsField() const;

                    /**
                     * 设置<p>cls日志中的字段名</p>
                     * @param _clsField <p>cls日志中的字段名</p>
                     * 
                     */
                    void SetClsField(const std::string& _clsField);

                    /**
                     * 判断参数 ClsField 是否已赋值
                     * @return ClsField 是否已赋值
                     * 
                     */
                    bool ClsFieldHasBeenSet() const;

                    /**
                     * 获取<p>数据湖计算服务表的列名</p>
                     * @return DlcField <p>数据湖计算服务表的列名</p>
                     * 
                     */
                    std::string GetDlcField() const;

                    /**
                     * 设置<p>数据湖计算服务表的列名</p>
                     * @param _dlcField <p>数据湖计算服务表的列名</p>
                     * 
                     */
                    void SetDlcField(const std::string& _dlcField);

                    /**
                     * 判断参数 DlcField 是否已赋值
                     * @return DlcField 是否已赋值
                     * 
                     */
                    bool DlcFieldHasBeenSet() const;

                    /**
                     * 获取<p>数据湖计算服务字段类型</p><p>枚举值：</p><ul><li>int|string|struct等： 参考 <a href="https://cloud.tencent.com/document/product/1342/53778#Column">DLC  cloumn中的Type 定义 </a></li></ul>
                     * @return DlcFieldType <p>数据湖计算服务字段类型</p><p>枚举值：</p><ul><li>int|string|struct等： 参考 <a href="https://cloud.tencent.com/document/product/1342/53778#Column">DLC  cloumn中的Type 定义 </a></li></ul>
                     * 
                     */
                    std::string GetDlcFieldType() const;

                    /**
                     * 设置<p>数据湖计算服务字段类型</p><p>枚举值：</p><ul><li>int|string|struct等： 参考 <a href="https://cloud.tencent.com/document/product/1342/53778#Column">DLC  cloumn中的Type 定义 </a></li></ul>
                     * @param _dlcFieldType <p>数据湖计算服务字段类型</p><p>枚举值：</p><ul><li>int|string|struct等： 参考 <a href="https://cloud.tencent.com/document/product/1342/53778#Column">DLC  cloumn中的Type 定义 </a></li></ul>
                     * 
                     */
                    void SetDlcFieldType(const std::string& _dlcFieldType);

                    /**
                     * 判断参数 DlcFieldType 是否已赋值
                     * @return DlcFieldType 是否已赋值
                     * 
                     */
                    bool DlcFieldTypeHasBeenSet() const;

                    /**
                     * 获取<p>解析失败填充字段</p>
                     * @return FillField <p>解析失败填充字段</p>
                     * 
                     */
                    std::string GetFillField() const;

                    /**
                     * 设置<p>解析失败填充字段</p>
                     * @param _fillField <p>解析失败填充字段</p>
                     * 
                     */
                    void SetFillField(const std::string& _fillField);

                    /**
                     * 判断参数 FillField 是否已赋值
                     * @return FillField 是否已赋值
                     * 
                     */
                    bool FillFieldHasBeenSet() const;

                    /**
                     * 获取<p>是否禁用</p>
                     * @return Disable <p>是否禁用</p>
                     * 
                     */
                    bool GetDisable() const;

                    /**
                     * 设置<p>是否禁用</p>
                     * @param _disable <p>是否禁用</p>
                     * 
                     */
                    void SetDisable(const bool& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                private:

                    /**
                     * <p>cls日志中的字段名</p>
                     */
                    std::string m_clsField;
                    bool m_clsFieldHasBeenSet;

                    /**
                     * <p>数据湖计算服务表的列名</p>
                     */
                    std::string m_dlcField;
                    bool m_dlcFieldHasBeenSet;

                    /**
                     * <p>数据湖计算服务字段类型</p><p>枚举值：</p><ul><li>int|string|struct等： 参考 <a href="https://cloud.tencent.com/document/product/1342/53778#Column">DLC  cloumn中的Type 定义 </a></li></ul>
                     */
                    std::string m_dlcFieldType;
                    bool m_dlcFieldTypeHasBeenSet;

                    /**
                     * <p>解析失败填充字段</p>
                     */
                    std::string m_fillField;
                    bool m_fillFieldHasBeenSet;

                    /**
                     * <p>是否禁用</p>
                     */
                    bool m_disable;
                    bool m_disableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCFILEDINFO_H_
