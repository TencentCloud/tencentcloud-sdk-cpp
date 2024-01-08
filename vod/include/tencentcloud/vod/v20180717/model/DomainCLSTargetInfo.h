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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINCLSTARGETINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINCLSTARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AreaCLSTargetInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 域名推送 CLS 目标。
                */
                class DomainCLSTargetInfo : public AbstractModel
                {
                public:
                    DomainCLSTargetInfo();
                    ~DomainCLSTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。
                     * @return Domain 域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。
                     * @param _domain 域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取中国大陆地区的日志推送目标。
                     * @return ChineseMainlandCLSTargetInfo 中国大陆地区的日志推送目标。
                     * 
                     */
                    AreaCLSTargetInfo GetChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置中国大陆地区的日志推送目标。
                     * @param _chineseMainlandCLSTargetInfo 中国大陆地区的日志推送目标。
                     * 
                     */
                    void SetChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _chineseMainlandCLSTargetInfo);

                    /**
                     * 判断参数 ChineseMainlandCLSTargetInfo 是否已赋值
                     * @return ChineseMainlandCLSTargetInfo 是否已赋值
                     * 
                     */
                    bool ChineseMainlandCLSTargetInfoHasBeenSet() const;

                    /**
                     * 获取中国大陆以外地区的日志推送目标。
                     * @return OutsideChineseMainlandCLSTargetInfo 中国大陆以外地区的日志推送目标。
                     * 
                     */
                    AreaCLSTargetInfo GetOutsideChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置中国大陆以外地区的日志推送目标。
                     * @param _outsideChineseMainlandCLSTargetInfo 中国大陆以外地区的日志推送目标。
                     * 
                     */
                    void SetOutsideChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _outsideChineseMainlandCLSTargetInfo);

                    /**
                     * 判断参数 OutsideChineseMainlandCLSTargetInfo 是否已赋值
                     * @return OutsideChineseMainlandCLSTargetInfo 是否已赋值
                     * 
                     */
                    bool OutsideChineseMainlandCLSTargetInfoHasBeenSet() const;

                private:

                    /**
                     * 域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 中国大陆地区的日志推送目标。
                     */
                    AreaCLSTargetInfo m_chineseMainlandCLSTargetInfo;
                    bool m_chineseMainlandCLSTargetInfoHasBeenSet;

                    /**
                     * 中国大陆以外地区的日志推送目标。
                     */
                    AreaCLSTargetInfo m_outsideChineseMainlandCLSTargetInfo;
                    bool m_outsideChineseMainlandCLSTargetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINCLSTARGETINFO_H_
