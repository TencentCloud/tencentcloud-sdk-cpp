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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEPROFILE_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 信息登记数据
                */
                class DeviceProfile : public AbstractModel
                {
                public:
                    DeviceProfile();
                    ~DeviceProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>值</p>
                     * @return Value <p>值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>值</p>
                     * @param _value <p>值</p>
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
                     * 获取<p>属性ID(只支持32位)</p>
                     * @return FieldId <p>属性ID(只支持32位)</p>
                     * 
                     */
                    int64_t GetFieldId() const;

                    /**
                     * 设置<p>属性ID(只支持32位)</p>
                     * @param _fieldId <p>属性ID(只支持32位)</p>
                     * 
                     */
                    void SetFieldId(const int64_t& _fieldId);

                    /**
                     * 判断参数 FieldId 是否已赋值
                     * @return FieldId 是否已赋值
                     * 
                     */
                    bool FieldIdHasBeenSet() const;

                    /**
                     * 获取<p>设备唯一标识码</p>
                     * @return Mid <p>设备唯一标识码</p>
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置<p>设备唯一标识码</p>
                     * @param _mid <p>设备唯一标识码</p>
                     * 
                     */
                    void SetMid(const std::string& _mid);

                    /**
                     * 判断参数 Mid 是否已赋值
                     * @return Mid 是否已赋值
                     * 
                     */
                    bool MidHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Title <p>名称</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _title <p>名称</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>类型(只支持32位)</p>
                     * @return Type <p>类型(只支持32位)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>类型(只支持32位)</p>
                     * @param _type <p>类型(只支持32位)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>可选数据</p>
                     * @return Options <p>可选数据</p>
                     * 
                     */
                    std::string GetOptions() const;

                    /**
                     * 设置<p>可选数据</p>
                     * @param _options <p>可选数据</p>
                     * 
                     */
                    void SetOptions(const std::string& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取<p>必填数据</p>
                     * @return IsMust <p>必填数据</p>
                     * 
                     */
                    std::string GetIsMust() const;

                    /**
                     * 设置<p>必填数据</p>
                     * @param _isMust <p>必填数据</p>
                     * 
                     */
                    void SetIsMust(const std::string& _isMust);

                    /**
                     * 判断参数 IsMust 是否已赋值
                     * @return IsMust 是否已赋值
                     * 
                     */
                    bool IsMustHasBeenSet() const;

                    /**
                     * 获取<p>必填数据</p>
                     * @return IsCustom <p>必填数据</p>
                     * 
                     */
                    std::string GetIsCustom() const;

                    /**
                     * 设置<p>必填数据</p>
                     * @param _isCustom <p>必填数据</p>
                     * 
                     */
                    void SetIsCustom(const std::string& _isCustom);

                    /**
                     * 判断参数 IsCustom 是否已赋值
                     * @return IsCustom 是否已赋值
                     * 
                     */
                    bool IsCustomHasBeenSet() const;

                private:

                    /**
                     * <p>值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>属性ID(只支持32位)</p>
                     */
                    int64_t m_fieldId;
                    bool m_fieldIdHasBeenSet;

                    /**
                     * <p>设备唯一标识码</p>
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>类型(只支持32位)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>可选数据</p>
                     */
                    std::string m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>必填数据</p>
                     */
                    std::string m_isMust;
                    bool m_isMustHasBeenSet;

                    /**
                     * <p>必填数据</p>
                     */
                    std::string m_isCustom;
                    bool m_isCustomHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEPROFILE_H_
