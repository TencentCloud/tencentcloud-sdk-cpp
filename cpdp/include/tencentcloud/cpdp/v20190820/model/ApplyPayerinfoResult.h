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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYPAYERINFORESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYPAYERINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyPayerinfoData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 付款人申请结果
                */
                class ApplyPayerinfoResult : public AbstractModel
                {
                public:
                    ApplyPayerinfoResult();
                    ~ApplyPayerinfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码
                     * @return Code 错误码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码
                     * @param _code 错误码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取数据
                     * @return Data 数据
                     * 
                     */
                    ApplyPayerinfoData GetData() const;

                    /**
                     * 设置数据
                     * @param _data 数据
                     * 
                     */
                    void SetData(const ApplyPayerinfoData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 错误码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 数据
                     */
                    ApplyPayerinfoData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYPAYERINFORESULT_H_
