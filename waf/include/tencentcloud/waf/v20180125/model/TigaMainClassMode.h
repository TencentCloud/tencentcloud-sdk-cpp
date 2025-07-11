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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TIGAMAINCLASSMODE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TIGAMAINCLASSMODE_H_

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
                * Tiga引擎中Mainclass的TypeID和防护模式
                */
                class TigaMainClassMode : public AbstractModel
                {
                public:
                    TigaMainClassMode();
                    ~TigaMainClassMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MainclassID
                     * @return TypeID MainclassID
                     * 
                     */
                    std::string GetTypeID() const;

                    /**
                     * 设置MainclassID
                     * @param _typeID MainclassID
                     * 
                     */
                    void SetTypeID(const std::string& _typeID);

                    /**
                     * 判断参数 TypeID 是否已赋值
                     * @return TypeID 是否已赋值
                     * 
                     */
                    bool TypeIDHasBeenSet() const;

                    /**
                     * 获取防护模式，0表示观察，1表示拦截
                     * @return Mode 防护模式，0表示观察，1表示拦截
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置防护模式，0表示观察，1表示拦截
                     * @param _mode 防护模式，0表示观察，1表示拦截
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * MainclassID
                     */
                    std::string m_typeID;
                    bool m_typeIDHasBeenSet;

                    /**
                     * 防护模式，0表示观察，1表示拦截
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TIGAMAINCLASSMODE_H_
