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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SCANINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SCANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 需要扫描的应用的服务信息
                */
                class ScanInfo : public AbstractModel
                {
                public:
                    ScanInfo();
                    ~ScanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务处理完成后的反向通知回调地址,批量提交app每扫描完成一个会通知一次,通知为POST请求，post信息{ItemId:
                     * @return CallbackUrl 任务处理完成后的反向通知回调地址,批量提交app每扫描完成一个会通知一次,通知为POST请求，post信息{ItemId:
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置任务处理完成后的反向通知回调地址,批量提交app每扫描完成一个会通知一次,通知为POST请求，post信息{ItemId:
                     * @param CallbackUrl 任务处理完成后的反向通知回调地址,批量提交app每扫描完成一个会通知一次,通知为POST请求，post信息{ItemId:
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取VULSCAN-漏洞扫描信息，VIRUSSCAN-返回病毒扫描信息， ADSCAN-广告扫描信息，PLUGINSCAN-插件扫描信息，可以自由组合
                     * @return ScanTypes VULSCAN-漏洞扫描信息，VIRUSSCAN-返回病毒扫描信息， ADSCAN-广告扫描信息，PLUGINSCAN-插件扫描信息，可以自由组合
                     */
                    std::vector<std::string> GetScanTypes() const;

                    /**
                     * 设置VULSCAN-漏洞扫描信息，VIRUSSCAN-返回病毒扫描信息， ADSCAN-广告扫描信息，PLUGINSCAN-插件扫描信息，可以自由组合
                     * @param ScanTypes VULSCAN-漏洞扫描信息，VIRUSSCAN-返回病毒扫描信息， ADSCAN-广告扫描信息，PLUGINSCAN-插件扫描信息，可以自由组合
                     */
                    void SetScanTypes(const std::vector<std::string>& _scanTypes);

                    /**
                     * 判断参数 ScanTypes 是否已赋值
                     * @return ScanTypes 是否已赋值
                     */
                    bool ScanTypesHasBeenSet() const;

                private:

                    /**
                     * 任务处理完成后的反向通知回调地址,批量提交app每扫描完成一个会通知一次,通知为POST请求，post信息{ItemId:
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * VULSCAN-漏洞扫描信息，VIRUSSCAN-返回病毒扫描信息， ADSCAN-广告扫描信息，PLUGINSCAN-插件扫描信息，可以自由组合
                     */
                    std::vector<std::string> m_scanTypes;
                    bool m_scanTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SCANINFO_H_
