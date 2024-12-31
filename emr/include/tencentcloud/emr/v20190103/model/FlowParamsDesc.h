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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_FLOWPARAMSDESC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_FLOWPARAMSDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 任务参数描述
                */
                class FlowParamsDesc : public AbstractModel
                {
                public:
                    FlowParamsDesc();
                    ~FlowParamsDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数key
                     * @return PKey 参数key
                     * 
                     */
                    std::string GetPKey() const;

                    /**
                     * 设置参数key
                     * @param _pKey 参数key
                     * 
                     */
                    void SetPKey(const std::string& _pKey);

                    /**
                     * 判断参数 PKey 是否已赋值
                     * @return PKey 是否已赋值
                     * 
                     */
                    bool PKeyHasBeenSet() const;

                    /**
                     * 获取参数value
                     * @return PValue 参数value
                     * 
                     */
                    std::string GetPValue() const;

                    /**
                     * 设置参数value
                     * @param _pValue 参数value
                     * 
                     */
                    void SetPValue(const std::string& _pValue);

                    /**
                     * 判断参数 PValue 是否已赋值
                     * @return PValue 是否已赋值
                     * 
                     */
                    bool PValueHasBeenSet() const;

                private:

                    /**
                     * 参数key
                     */
                    std::string m_pKey;
                    bool m_pKeyHasBeenSet;

                    /**
                     * 参数value
                     */
                    std::string m_pValue;
                    bool m_pValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_FLOWPARAMSDESC_H_
