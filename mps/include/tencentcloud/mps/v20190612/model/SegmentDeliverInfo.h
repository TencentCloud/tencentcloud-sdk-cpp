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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTDELIVERINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTDELIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/NameServer.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SourceLocation垫片配置。
                */
                class SegmentDeliverInfo : public AbstractModel
                {
                public:
                    SegmentDeliverInfo();
                    ~SegmentDeliverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认内容源地址。
                     * @return DefaultSegmentUrl 默认内容源地址。
                     * 
                     */
                    std::string GetDefaultSegmentUrl() const;

                    /**
                     * 设置默认内容源地址。
                     * @param _defaultSegmentUrl 默认内容源地址。
                     * 
                     */
                    void SetDefaultSegmentUrl(const std::string& _defaultSegmentUrl);

                    /**
                     * 判断参数 DefaultSegmentUrl 是否已赋值
                     * @return DefaultSegmentUrl 是否已赋值
                     * 
                     */
                    bool DefaultSegmentUrlHasBeenSet() const;

                    /**
                     * 获取自定义服务器地址。
                     * @return NameServers 自定义服务器地址。
                     * 
                     */
                    std::vector<NameServer> GetNameServers() const;

                    /**
                     * 设置自定义服务器地址。
                     * @param _nameServers 自定义服务器地址。
                     * 
                     */
                    void SetNameServers(const std::vector<NameServer>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                private:

                    /**
                     * 默认内容源地址。
                     */
                    std::string m_defaultSegmentUrl;
                    bool m_defaultSegmentUrlHasBeenSet;

                    /**
                     * 自定义服务器地址。
                     */
                    std::vector<NameServer> m_nameServers;
                    bool m_nameServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTDELIVERINFO_H_
