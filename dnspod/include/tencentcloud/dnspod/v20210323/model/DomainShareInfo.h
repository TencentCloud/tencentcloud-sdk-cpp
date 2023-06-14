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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名共享信息
                */
                class DomainShareInfo : public AbstractModel
                {
                public:
                    DomainShareInfo();
                    ~DomainShareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名共享对象的账号
                     * @return ShareTo 域名共享对象的账号
                     * 
                     */
                    std::string GetShareTo() const;

                    /**
                     * 设置域名共享对象的账号
                     * @param _shareTo 域名共享对象的账号
                     * 
                     */
                    void SetShareTo(const std::string& _shareTo);

                    /**
                     * 判断参数 ShareTo 是否已赋值
                     * @return ShareTo 是否已赋值
                     * 
                     */
                    bool ShareToHasBeenSet() const;

                    /**
                     * 获取共享模式，“rw”：可读写。 “r”:：只读
                     * @return Mode 共享模式，“rw”：可读写。 “r”:：只读
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置共享模式，“rw”：可读写。 “r”:：只读
                     * @param _mode 共享模式，“rw”：可读写。 “r”:：只读
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取共享状态“enabled”：共享成功。“pending”：共享到的账号不存在, 等待注册
                     * @return Status 共享状态“enabled”：共享成功。“pending”：共享到的账号不存在, 等待注册
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置共享状态“enabled”：共享成功。“pending”：共享到的账号不存在, 等待注册
                     * @param _status 共享状态“enabled”：共享成功。“pending”：共享到的账号不存在, 等待注册
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 域名共享对象的账号
                     */
                    std::string m_shareTo;
                    bool m_shareToHasBeenSet;

                    /**
                     * 共享模式，“rw”：可读写。 “r”:：只读
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 共享状态“enabled”：共享成功。“pending”：共享到的账号不存在, 等待注册
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREINFO_H_
