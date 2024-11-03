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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APIPARAMETERTYPE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APIPARAMETERTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * api请求参数类型
                */
                class ApiParameterType : public AbstractModel
                {
                public:
                    ApiParameterType();
                    ~ApiParameterType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称
                     * @return ParameterName 参数名称
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置参数名称
                     * @param _parameterName 参数名称
                     * 
                     */
                    void SetParameterName(const std::string& _parameterName);

                    /**
                     * 判断参数 ParameterName 是否已赋值
                     * @return ParameterName 是否已赋值
                     * 
                     */
                    bool ParameterNameHasBeenSet() const;

                    /**
                     * 获取参数类型
                     * @return Type 参数类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数类型
                     * @param _type 参数类型
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
                     * 获取参数位置
                     * @return Location 参数位置
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置参数位置
                     * @param _location 参数位置
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取数据标签(敏感字段)
                     * @return Label 数据标签(敏感字段)
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置数据标签(敏感字段)
                     * @param _label 数据标签(敏感字段)
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return Timestamp 时间戳
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置时间戳
                     * @param _timestamp 时间戳
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取来源是请求或者响应
                     * @return Source 来源是请求或者响应
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源是请求或者响应
                     * @param _source 来源是请求或者响应
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取是否需要泛化 ，0表示不需要，1表示需要
                     * @return IsPan 是否需要泛化 ，0表示不需要，1表示需要
                     * 
                     */
                    int64_t GetIsPan() const;

                    /**
                     * 设置是否需要泛化 ，0表示不需要，1表示需要
                     * @param _isPan 是否需要泛化 ，0表示不需要，1表示需要
                     * 
                     */
                    void SetIsPan(const int64_t& _isPan);

                    /**
                     * 判断参数 IsPan 是否已赋值
                     * @return IsPan 是否已赋值
                     * 
                     */
                    bool IsPanHasBeenSet() const;

                    /**
                     * 获取是否鉴权，1表示是，0表示否
                     * @return IsAuth 是否鉴权，1表示是，0表示否
                     * 
                     */
                    int64_t GetIsAuth() const;

                    /**
                     * 设置是否鉴权，1表示是，0表示否
                     * @param _isAuth 是否鉴权，1表示是，0表示否
                     * 
                     */
                    void SetIsAuth(const int64_t& _isAuth);

                    /**
                     * 判断参数 IsAuth 是否已赋值
                     * @return IsAuth 是否已赋值
                     * 
                     */
                    bool IsAuthHasBeenSet() const;

                private:

                    /**
                     * 参数名称
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                    /**
                     * 参数类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 参数位置
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 数据标签(敏感字段)
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 时间戳
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 来源是请求或者响应
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 是否需要泛化 ，0表示不需要，1表示需要
                     */
                    int64_t m_isPan;
                    bool m_isPanHasBeenSet;

                    /**
                     * 是否鉴权，1表示是，0表示否
                     */
                    int64_t m_isAuth;
                    bool m_isAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APIPARAMETERTYPE_H_
