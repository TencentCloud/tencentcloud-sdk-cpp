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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_INTELLIGENCERESULT_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_INTELLIGENCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 漏洞情报扫描结果
                */
                class IntelligenceResult : public AbstractModel
                {
                public:
                    IntelligenceResult();
                    ~IntelligenceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>客户ID</p>
                     * @return CustomerId <p>客户ID</p>
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置<p>客户ID</p>
                     * @param _customerId <p>客户ID</p>
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取<p>客户名称</p>
                     * @return CustomerName <p>客户名称</p>
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置<p>客户名称</p>
                     * @param _customerName <p>客户名称</p>
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取<p>标题</p>
                     * @return Title <p>标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>标题</p>
                     * @param _title <p>标题</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>指纹</p>
                     * @return Banner <p>指纹</p>
                     * 
                     */
                    std::string GetBanner() const;

                    /**
                     * 设置<p>指纹</p>
                     * @param _banner <p>指纹</p>
                     * 
                     */
                    void SetBanner(const std::string& _banner);

                    /**
                     * 判断参数 Banner 是否已赋值
                     * @return Banner 是否已赋值
                     * 
                     */
                    bool BannerHasBeenSet() const;

                    /**
                     * 获取<p>截图预览</p>
                     * @return ScreenshotUrl <p>截图预览</p>
                     * 
                     */
                    std::string GetScreenshotUrl() const;

                    /**
                     * 设置<p>截图预览</p>
                     * @param _screenshotUrl <p>截图预览</p>
                     * 
                     */
                    void SetScreenshotUrl(const std::string& _screenshotUrl);

                    /**
                     * 判断参数 ScreenshotUrl 是否已赋值
                     * @return ScreenshotUrl 是否已赋值
                     * 
                     */
                    bool ScreenshotUrlHasBeenSet() const;

                    /**
                     * 获取<p>是否受影响</p>
                     * @return IsAffected <p>是否受影响</p>
                     * 
                     */
                    bool GetIsAffected() const;

                    /**
                     * 设置<p>是否受影响</p>
                     * @param _isAffected <p>是否受影响</p>
                     * 
                     */
                    void SetIsAffected(const bool& _isAffected);

                    /**
                     * 判断参数 IsAffected 是否已赋值
                     * @return IsAffected 是否已赋值
                     * 
                     */
                    bool IsAffectedHasBeenSet() const;

                    /**
                     * 获取<p>网址</p>
                     * @return Url <p>网址</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>网址</p>
                     * @param _url <p>网址</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * <p>客户ID</p>
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * <p>客户名称</p>
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>指纹</p>
                     */
                    std::string m_banner;
                    bool m_bannerHasBeenSet;

                    /**
                     * <p>截图预览</p>
                     */
                    std::string m_screenshotUrl;
                    bool m_screenshotUrlHasBeenSet;

                    /**
                     * <p>是否受影响</p>
                     */
                    bool m_isAffected;
                    bool m_isAffectedHasBeenSet;

                    /**
                     * <p>网址</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_INTELLIGENCERESULT_H_
