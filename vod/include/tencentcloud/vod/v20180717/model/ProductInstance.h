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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTINSTANCE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProductInstanceRecource.h>
#include <tencentcloud/vod/v20180717/model/ProductInstanceResource.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 预付费商品实例
                */
                class ProductInstance : public AbstractModel
                {
                public:
                    ProductInstance();
                    ~ProductInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预付费商品实例类型，取值有：</p><li>StarterPackage：点播新手包。</li><li>MiniProgramPlugin：点播小程序插件。</li><li>ResourcePackage：点播资源包。</li>
                     * @return ProductType <p>预付费商品实例类型，取值有：</p><li>StarterPackage：点播新手包。</li><li>MiniProgramPlugin：点播小程序插件。</li><li>ResourcePackage：点播资源包。</li>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>预付费商品实例类型，取值有：</p><li>StarterPackage：点播新手包。</li><li>MiniProgramPlugin：点播小程序插件。</li><li>ResourcePackage：点播资源包。</li>
                     * @param _productType <p>预付费商品实例类型，取值有：</p><li>StarterPackage：点播新手包。</li><li>MiniProgramPlugin：点播小程序插件。</li><li>ResourcePackage：点播资源包。</li>
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源包实例起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return StartTime <p>资源包实例起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>资源包实例起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _startTime <p>资源包实例起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>资源包实例过期日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return ExpireTime <p>资源包实例过期日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>资源包实例过期日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _expireTime <p>资源包实例过期日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>资源包实例ID。对应每个资源包，系统会分配相应的资源。续费或者升级资源包时，需要带上这个资源ID。</p>
                     * @return ProductInstanceId <p>资源包实例ID。对应每个资源包，系统会分配相应的资源。续费或者升级资源包时，需要带上这个资源ID。</p>
                     * 
                     */
                    std::string GetProductInstanceId() const;

                    /**
                     * 设置<p>资源包实例ID。对应每个资源包，系统会分配相应的资源。续费或者升级资源包时，需要带上这个资源ID。</p>
                     * @param _productInstanceId <p>资源包实例ID。对应每个资源包，系统会分配相应的资源。续费或者升级资源包时，需要带上这个资源ID。</p>
                     * 
                     */
                    void SetProductInstanceId(const std::string& _productInstanceId);

                    /**
                     * 判断参数 ProductInstanceId 是否已赋值
                     * @return ProductInstanceId 是否已赋值
                     * 
                     */
                    bool ProductInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>系统最近一次扣除资源包的日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return LastConsumeDate <p>系统最近一次扣除资源包的日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetLastConsumeDate() const;

                    /**
                     * 设置<p>系统最近一次扣除资源包的日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _lastConsumeDate <p>系统最近一次扣除资源包的日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetLastConsumeDate(const std::string& _lastConsumeDate);

                    /**
                     * 判断参数 LastConsumeDate 是否已赋值
                     * @return LastConsumeDate 是否已赋值
                     * 
                     */
                    bool LastConsumeDateHasBeenSet() const;

                    /**
                     * 获取<p>资源包绑定 License 状态，取值有：</p><li>0：未绑定。</li><li>1：已绑定。</li>
                     * @return BindStatus <p>资源包绑定 License 状态，取值有：</p><li>0：未绑定。</li><li>1：已绑定。</li>
                     * 
                     */
                    int64_t GetBindStatus() const;

                    /**
                     * 设置<p>资源包绑定 License 状态，取值有：</p><li>0：未绑定。</li><li>1：已绑定。</li>
                     * @param _bindStatus <p>资源包绑定 License 状态，取值有：</p><li>0：未绑定。</li><li>1：已绑定。</li>
                     * 
                     */
                    void SetBindStatus(const int64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取<p>预付费资源包实例中包含的资源包列表。</p>
                     * @return ProductInstanceResourceSet <p>预付费资源包实例中包含的资源包列表。</p>
                     * @deprecated
                     */
                    std::vector<ProductInstanceRecource> GetProductInstanceResourceSet() const;

                    /**
                     * 设置<p>预付费资源包实例中包含的资源包列表。</p>
                     * @param _productInstanceResourceSet <p>预付费资源包实例中包含的资源包列表。</p>
                     * @deprecated
                     */
                    void SetProductInstanceResourceSet(const std::vector<ProductInstanceRecource>& _productInstanceResourceSet);

                    /**
                     * 判断参数 ProductInstanceResourceSet 是否已赋值
                     * @return ProductInstanceResourceSet 是否已赋值
                     * @deprecated
                     */
                    bool ProductInstanceResourceSetHasBeenSet() const;

                    /**
                     * 获取<p>预付费资源包实例中包含的资源包列表。</p>
                     * @return ResourceSet <p>预付费资源包实例中包含的资源包列表。</p>
                     * 
                     */
                    std::vector<ProductInstanceResource> GetResourceSet() const;

                    /**
                     * 设置<p>预付费资源包实例中包含的资源包列表。</p>
                     * @param _resourceSet <p>预付费资源包实例中包含的资源包列表。</p>
                     * 
                     */
                    void SetResourceSet(const std::vector<ProductInstanceResource>& _resourceSet);

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                    /**
                     * 获取<p>资源包实例的状态，取值有：</p><li>Effective：生效，可用于计费抵扣。</li><li>Isolated：隔离，不可用于计费抵扣。</li>
                     * @return ProductInstanceStatus <p>资源包实例的状态，取值有：</p><li>Effective：生效，可用于计费抵扣。</li><li>Isolated：隔离，不可用于计费抵扣。</li>
                     * 
                     */
                    std::string GetProductInstanceStatus() const;

                    /**
                     * 设置<p>资源包实例的状态，取值有：</p><li>Effective：生效，可用于计费抵扣。</li><li>Isolated：隔离，不可用于计费抵扣。</li>
                     * @param _productInstanceStatus <p>资源包实例的状态，取值有：</p><li>Effective：生效，可用于计费抵扣。</li><li>Isolated：隔离，不可用于计费抵扣。</li>
                     * 
                     */
                    void SetProductInstanceStatus(const std::string& _productInstanceStatus);

                    /**
                     * 判断参数 ProductInstanceStatus 是否已赋值
                     * @return ProductInstanceStatus 是否已赋值
                     * 
                     */
                    bool ProductInstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>资源包实例的可退还状态，取值有：</p><li>FullRefund：可全额退款。</li><li>Denied：不可退款。</li>
                     * @return RefundStatus <p>资源包实例的可退还状态，取值有：</p><li>FullRefund：可全额退款。</li><li>Denied：不可退款。</li>
                     * 
                     */
                    std::string GetRefundStatus() const;

                    /**
                     * 设置<p>资源包实例的可退还状态，取值有：</p><li>FullRefund：可全额退款。</li><li>Denied：不可退款。</li>
                     * @param _refundStatus <p>资源包实例的可退还状态，取值有：</p><li>FullRefund：可全额退款。</li><li>Denied：不可退款。</li>
                     * 
                     */
                    void SetRefundStatus(const std::string& _refundStatus);

                    /**
                     * 判断参数 RefundStatus 是否已赋值
                     * @return RefundStatus 是否已赋值
                     * 
                     */
                    bool RefundStatusHasBeenSet() const;

                    /**
                     * 获取<p>自动续费状态，取值有：</p><li>Never：不自动续费。</li><li>Expire：到期自动续费。</li><li>ExpireOrUseOut：到期或用完自动续费。</li><li>NotSupport：不支持。</li>
                     * @return RenewStatus <p>自动续费状态，取值有：</p><li>Never：不自动续费。</li><li>Expire：到期自动续费。</li><li>ExpireOrUseOut：到期或用完自动续费。</li><li>NotSupport：不支持。</li>
                     * 
                     */
                    std::string GetRenewStatus() const;

                    /**
                     * 设置<p>自动续费状态，取值有：</p><li>Never：不自动续费。</li><li>Expire：到期自动续费。</li><li>ExpireOrUseOut：到期或用完自动续费。</li><li>NotSupport：不支持。</li>
                     * @param _renewStatus <p>自动续费状态，取值有：</p><li>Never：不自动续费。</li><li>Expire：到期自动续费。</li><li>ExpireOrUseOut：到期或用完自动续费。</li><li>NotSupport：不支持。</li>
                     * 
                     */
                    void SetRenewStatus(const std::string& _renewStatus);

                    /**
                     * 判断参数 RenewStatus 是否已赋值
                     * @return RenewStatus 是否已赋值
                     * 
                     */
                    bool RenewStatusHasBeenSet() const;

                private:

                    /**
                     * <p>预付费商品实例类型，取值有：</p><li>StarterPackage：点播新手包。</li><li>MiniProgramPlugin：点播小程序插件。</li><li>ResourcePackage：点播资源包。</li>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>资源包实例起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>资源包实例过期日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>资源包实例ID。对应每个资源包，系统会分配相应的资源。续费或者升级资源包时，需要带上这个资源ID。</p>
                     */
                    std::string m_productInstanceId;
                    bool m_productInstanceIdHasBeenSet;

                    /**
                     * <p>系统最近一次扣除资源包的日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_lastConsumeDate;
                    bool m_lastConsumeDateHasBeenSet;

                    /**
                     * <p>资源包绑定 License 状态，取值有：</p><li>0：未绑定。</li><li>1：已绑定。</li>
                     */
                    int64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * <p>预付费资源包实例中包含的资源包列表。</p>
                     */
                    std::vector<ProductInstanceRecource> m_productInstanceResourceSet;
                    bool m_productInstanceResourceSetHasBeenSet;

                    /**
                     * <p>预付费资源包实例中包含的资源包列表。</p>
                     */
                    std::vector<ProductInstanceResource> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                    /**
                     * <p>资源包实例的状态，取值有：</p><li>Effective：生效，可用于计费抵扣。</li><li>Isolated：隔离，不可用于计费抵扣。</li>
                     */
                    std::string m_productInstanceStatus;
                    bool m_productInstanceStatusHasBeenSet;

                    /**
                     * <p>资源包实例的可退还状态，取值有：</p><li>FullRefund：可全额退款。</li><li>Denied：不可退款。</li>
                     */
                    std::string m_refundStatus;
                    bool m_refundStatusHasBeenSet;

                    /**
                     * <p>自动续费状态，取值有：</p><li>Never：不自动续费。</li><li>Expire：到期自动续费。</li><li>ExpireOrUseOut：到期或用完自动续费。</li><li>NotSupport：不支持。</li>
                     */
                    std::string m_renewStatus;
                    bool m_renewStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTINSTANCE_H_
