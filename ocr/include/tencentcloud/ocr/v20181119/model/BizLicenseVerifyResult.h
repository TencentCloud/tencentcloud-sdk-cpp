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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEVERIFYRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEVERIFYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 验真接口
                */
                class BizLicenseVerifyResult : public AbstractModel
                {
                public:
                    BizLicenseVerifyResult();
                    ~BizLicenseVerifyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取“0“：一致
“-1”：不一致
                     * @return RegNum “0“：一致
“-1”：不一致
                     * 
                     */
                    std::string GetRegNum() const;

                    /**
                     * 设置“0“：一致
“-1”：不一致
                     * @param _regNum “0“：一致
“-1”：不一致
                     * 
                     */
                    void SetRegNum(const std::string& _regNum);

                    /**
                     * 判断参数 RegNum 是否已赋值
                     * @return RegNum 是否已赋值
                     * 
                     */
                    bool RegNumHasBeenSet() const;

                    /**
                     * 获取“0“：一致
“-1”：不一致
“”：不验真
                     * @return Name “0“：一致
“-1”：不一致
“”：不验真
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置“0“：一致
“-1”：不一致
“”：不验真
                     * @param _name “0“：一致
“-1”：不一致
“”：不验真
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
                     * 获取“0“：一致
“-1”：不一致
“”：不验真
                     * @return Address “0“：一致
“-1”：不一致
“”：不验真
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置“0“：一致
“-1”：不一致
“”：不验真
                     * @param _address “0“：一致
“-1”：不一致
“”：不验真
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * “0“：一致
“-1”：不一致
                     */
                    std::string m_regNum;
                    bool m_regNumHasBeenSet;

                    /**
                     * “0“：一致
“-1”：不一致
“”：不验真
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * “0“：一致
“-1”：不一致
“”：不验真
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEVERIFYRESULT_H_
