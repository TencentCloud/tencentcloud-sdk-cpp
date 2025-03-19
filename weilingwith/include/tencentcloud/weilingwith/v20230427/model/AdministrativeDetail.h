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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADMINISTRATIVEDETAIL_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADMINISTRATIVEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 行政区划详情
                */
                class AdministrativeDetail : public AbstractModel
                {
                public:
                    AdministrativeDetail();
                    ~AdministrativeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行政区域类型编码
                     * @return AdministrativeTypeCode 行政区域类型编码
                     * 
                     */
                    std::string GetAdministrativeTypeCode() const;

                    /**
                     * 设置行政区域类型编码
                     * @param _administrativeTypeCode 行政区域类型编码
                     * 
                     */
                    void SetAdministrativeTypeCode(const std::string& _administrativeTypeCode);

                    /**
                     * 判断参数 AdministrativeTypeCode 是否已赋值
                     * @return AdministrativeTypeCode 是否已赋值
                     * 
                     */
                    bool AdministrativeTypeCodeHasBeenSet() const;

                    /**
                     * 获取行政区域编码
                     * @return AdministrativeCode 行政区域编码
                     * 
                     */
                    std::string GetAdministrativeCode() const;

                    /**
                     * 设置行政区域编码
                     * @param _administrativeCode 行政区域编码
                     * 
                     */
                    void SetAdministrativeCode(const std::string& _administrativeCode);

                    /**
                     * 判断参数 AdministrativeCode 是否已赋值
                     * @return AdministrativeCode 是否已赋值
                     * 
                     */
                    bool AdministrativeCodeHasBeenSet() const;

                    /**
                     * 获取行政区域名称
                     * @return AdministrativeName 行政区域名称
                     * 
                     */
                    std::string GetAdministrativeName() const;

                    /**
                     * 设置行政区域名称
                     * @param _administrativeName 行政区域名称
                     * 
                     */
                    void SetAdministrativeName(const std::string& _administrativeName);

                    /**
                     * 判断参数 AdministrativeName 是否已赋值
                     * @return AdministrativeName 是否已赋值
                     * 
                     */
                    bool AdministrativeNameHasBeenSet() const;

                private:

                    /**
                     * 行政区域类型编码
                     */
                    std::string m_administrativeTypeCode;
                    bool m_administrativeTypeCodeHasBeenSet;

                    /**
                     * 行政区域编码
                     */
                    std::string m_administrativeCode;
                    bool m_administrativeCodeHasBeenSet;

                    /**
                     * 行政区域名称
                     */
                    std::string m_administrativeName;
                    bool m_administrativeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADMINISTRATIVEDETAIL_H_
