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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONSISTENCYOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONSISTENCYOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据一致性校验选项， 默认为不开启一致性校验
                */
                class ConsistencyOption : public AbstractModel
                {
                public:
                    ConsistencyOption();
                    ~ConsistencyOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一致性检测类型: full(全量检测迁移对象)、noCheck(不检测)、notConfigured(未配置)
                     * @return Mode 一致性检测类型: full(全量检测迁移对象)、noCheck(不检测)、notConfigured(未配置)
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置一致性检测类型: full(全量检测迁移对象)、noCheck(不检测)、notConfigured(未配置)
                     * @param _mode 一致性检测类型: full(全量检测迁移对象)、noCheck(不检测)、notConfigured(未配置)
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 一致性检测类型: full(全量检测迁移对象)、noCheck(不检测)、notConfigured(未配置)
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONSISTENCYOPTION_H_
