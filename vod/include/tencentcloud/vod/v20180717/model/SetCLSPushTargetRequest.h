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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETCLSPUSHTARGETREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETCLSPUSHTARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SetCLSPushTarget请求参数结构体
                */
                class SetCLSPushTargetRequest : public AbstractModel
                {
                public:
                    SetCLSPushTargetRequest();
                    ~SetCLSPushTargetRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const int64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取要设置的中国大陆地区的日志推送目标。
                     * @return ChineseMainlandCLSTargetInfo 要设置的中国大陆地区的日志推送目标。
                     * 
                     */
                    AreaCLSTargetInfo GetChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置要设置的中国大陆地区的日志推送目标。
                     * @param _chineseMainlandCLSTargetInfo 要设置的中国大陆地区的日志推送目标。
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
                     * 获取要设置的中国大陆以外地区的日志推送目标。
                     * @return OutsideChineseMainlandCLSTargetInfo 要设置的中国大陆以外地区的日志推送目标。
                     * 
                     */
                    AreaCLSTargetInfo GetOutsideChineseMainlandCLSTargetInfo() const;

                    /**
                     * 设置要设置的中国大陆以外地区的日志推送目标。
                     * @param _outsideChineseMainlandCLSTargetInfo 要设置的中国大陆以外地区的日志推送目标。
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
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 要设置的中国大陆地区的日志推送目标。
                     */
                    AreaCLSTargetInfo m_chineseMainlandCLSTargetInfo;
                    bool m_chineseMainlandCLSTargetInfoHasBeenSet;

                    /**
                     * 要设置的中国大陆以外地区的日志推送目标。
                     */
                    AreaCLSTargetInfo m_outsideChineseMainlandCLSTargetInfo;
                    bool m_outsideChineseMainlandCLSTargetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETCLSPUSHTARGETREQUEST_H_
