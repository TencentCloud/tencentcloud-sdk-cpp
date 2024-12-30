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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRTOKENREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/IDCardConfig.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GetOCRToken请求参数结构体
                */
                class GetOCRTokenRequest : public AbstractModel
                {
                public:
                    GetOCRTokenRequest();
                    ~GetOCRTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务类型，如身份证识别为IDCardOCR
                     * @return Type 业务类型，如身份证识别为IDCardOCR
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置业务类型，如身份证识别为IDCardOCR
                     * @param _type 业务类型，如身份证识别为IDCardOCR
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
                     * 获取身份证配置信息
                     * @return IDCardConfig 身份证配置信息
                     * 
                     */
                    IDCardConfig GetIDCardConfig() const;

                    /**
                     * 设置身份证配置信息
                     * @param _iDCardConfig 身份证配置信息
                     * 
                     */
                    void SetIDCardConfig(const IDCardConfig& _iDCardConfig);

                    /**
                     * 判断参数 IDCardConfig 是否已赋值
                     * @return IDCardConfig 是否已赋值
                     * 
                     */
                    bool IDCardConfigHasBeenSet() const;

                private:

                    /**
                     * 业务类型，如身份证识别为IDCardOCR
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 身份证配置信息
                     */
                    IDCardConfig m_iDCardConfig;
                    bool m_iDCardConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRTOKENREQUEST_H_
