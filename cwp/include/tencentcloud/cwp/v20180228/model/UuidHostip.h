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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_UUIDHOSTIP_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_UUIDHOSTIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 过检机器和对应的hostip
                */
                class UuidHostip : public AbstractModel
                {
                public:
                    UuidHostip();
                    ~UuidHostip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器id
                     * @return Uuid 服务器id
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置服务器id
                     * @param _uuid 服务器id
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取服务器ip
                     * @return Hostip 服务器ip
                     * 
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置服务器ip
                     * @param _hostip 服务器ip
                     * 
                     */
                    void SetHostip(const std::string& _hostip);

                    /**
                     * 判断参数 Hostip 是否已赋值
                     * @return Hostip 是否已赋值
                     * 
                     */
                    bool HostipHasBeenSet() const;

                private:

                    /**
                     * 服务器id
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 服务器ip
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_UUIDHOSTIP_H_
