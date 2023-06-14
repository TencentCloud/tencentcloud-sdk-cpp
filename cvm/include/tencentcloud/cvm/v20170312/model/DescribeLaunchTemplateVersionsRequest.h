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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeLaunchTemplateVersions请求参数结构体
                */
                class DescribeLaunchTemplateVersionsRequest : public AbstractModel
                {
                public:
                    DescribeLaunchTemplateVersionsRequest();
                    ~DescribeLaunchTemplateVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取启动模板ID。
                     * @return LaunchTemplateId 启动模板ID。
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置启动模板ID。
                     * @param _launchTemplateId 启动模板ID。
                     * 
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取实例启动模板列表。
                     * @return LaunchTemplateVersions 实例启动模板列表。
                     * 
                     */
                    std::vector<uint64_t> GetLaunchTemplateVersions() const;

                    /**
                     * 设置实例启动模板列表。
                     * @param _launchTemplateVersions 实例启动模板列表。
                     * 
                     */
                    void SetLaunchTemplateVersions(const std::vector<uint64_t>& _launchTemplateVersions);

                    /**
                     * 判断参数 LaunchTemplateVersions 是否已赋值
                     * @return LaunchTemplateVersions 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionsHasBeenSet() const;

                    /**
                     * 获取通过范围指定版本时的最小版本号，默认为0。
                     * @return MinVersion 通过范围指定版本时的最小版本号，默认为0。
                     * 
                     */
                    uint64_t GetMinVersion() const;

                    /**
                     * 设置通过范围指定版本时的最小版本号，默认为0。
                     * @param _minVersion 通过范围指定版本时的最小版本号，默认为0。
                     * 
                     */
                    void SetMinVersion(const uint64_t& _minVersion);

                    /**
                     * 判断参数 MinVersion 是否已赋值
                     * @return MinVersion 是否已赋值
                     * 
                     */
                    bool MinVersionHasBeenSet() const;

                    /**
                     * 获取过范围指定版本时的最大版本号，默认为30。
                     * @return MaxVersion 过范围指定版本时的最大版本号，默认为30。
                     * 
                     */
                    uint64_t GetMaxVersion() const;

                    /**
                     * 设置过范围指定版本时的最大版本号，默认为30。
                     * @param _maxVersion 过范围指定版本时的最大版本号，默认为30。
                     * 
                     */
                    void SetMaxVersion(const uint64_t& _maxVersion);

                    /**
                     * 判断参数 MaxVersion 是否已赋值
                     * @return MaxVersion 是否已赋值
                     * 
                     */
                    bool MaxVersionHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取是否查询默认版本。该参数不可与LaunchTemplateVersions同时指定。
                     * @return DefaultVersion 是否查询默认版本。该参数不可与LaunchTemplateVersions同时指定。
                     * 
                     */
                    bool GetDefaultVersion() const;

                    /**
                     * 设置是否查询默认版本。该参数不可与LaunchTemplateVersions同时指定。
                     * @param _defaultVersion 是否查询默认版本。该参数不可与LaunchTemplateVersions同时指定。
                     * 
                     */
                    void SetDefaultVersion(const bool& _defaultVersion);

                    /**
                     * 判断参数 DefaultVersion 是否已赋值
                     * @return DefaultVersion 是否已赋值
                     * 
                     */
                    bool DefaultVersionHasBeenSet() const;

                private:

                    /**
                     * 启动模板ID。
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * 实例启动模板列表。
                     */
                    std::vector<uint64_t> m_launchTemplateVersions;
                    bool m_launchTemplateVersionsHasBeenSet;

                    /**
                     * 通过范围指定版本时的最小版本号，默认为0。
                     */
                    uint64_t m_minVersion;
                    bool m_minVersionHasBeenSet;

                    /**
                     * 过范围指定版本时的最大版本号，默认为30。
                     */
                    uint64_t m_maxVersion;
                    bool m_maxVersionHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否查询默认版本。该参数不可与LaunchTemplateVersions同时指定。
                     */
                    bool m_defaultVersion;
                    bool m_defaultVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_
