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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEENVREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Tag.h>
#include <tencentcloud/tcb/v20180608/model/ExternalStorage.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateEnv请求参数结构体
                */
                class CreateEnvRequest : public AbstractModel
                {
                public:
                    CreateEnvRequest();
                    ~CreateEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境别名。</p><h3 id=".E6.A0.BC.E5.BC.8F.E8.A6.81.E6.B1.82">格式要求</h3><ul><li>可选字符： 小写字母(a~z)、数字、减号(-)</li><li>不能以 减号(-) 开头或结尾</li><li>不能有连个连续的 减号(-)</li><li>长度不超过20位<br>示例值：cloud</li></ul>
                     * @return Alias <p>环境别名。</p><h3 id=".E6.A0.BC.E5.BC.8F.E8.A6.81.E6.B1.82">格式要求</h3><ul><li>可选字符： 小写字母(a~z)、数字、减号(-)</li><li>不能以 减号(-) 开头或结尾</li><li>不能有连个连续的 减号(-)</li><li>长度不超过20位<br>示例值：cloud</li></ul>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>环境别名。</p><h3 id=".E6.A0.BC.E5.BC.8F.E8.A6.81.E6.B1.82">格式要求</h3><ul><li>可选字符： 小写字母(a~z)、数字、减号(-)</li><li>不能以 减号(-) 开头或结尾</li><li>不能有连个连续的 减号(-)</li><li>长度不超过20位<br>示例值：cloud</li></ul>
                     * @param _alias <p>环境别名。</p><h3 id=".E6.A0.BC.E5.BC.8F.E8.A6.81.E6.B1.82">格式要求</h3><ul><li>可选字符： 小写字母(a~z)、数字、减号(-)</li><li>不能以 减号(-) 开头或结尾</li><li>不能有连个连续的 减号(-)</li><li>长度不超过20位<br>示例值：cloud</li></ul>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>云开发环境套餐Id。<br>对于云开发环境套餐，可通过 <a href="https://cloud.tencent.com/document/product/876/78167">DescribeBaasPackageList</a> 接口获取，对应其出参的PackageName。</p>
                     * @return PackageId <p>云开发环境套餐Id。<br>对于云开发环境套餐，可通过 <a href="https://cloud.tencent.com/document/product/876/78167">DescribeBaasPackageList</a> 接口获取，对应其出参的PackageName。</p>
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置<p>云开发环境套餐Id。<br>对于云开发环境套餐，可通过 <a href="https://cloud.tencent.com/document/product/876/78167">DescribeBaasPackageList</a> 接口获取，对应其出参的PackageName。</p>
                     * @param _packageId <p>云开发环境套餐Id。<br>对于云开发环境套餐，可通过 <a href="https://cloud.tencent.com/document/product/876/78167">DescribeBaasPackageList</a> 接口获取，对应其出参的PackageName。</p>
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型。代表新购环境时需要发货哪些资源。<br>可取值以及含义：</p><ul><li>flexdb : 表示文档型数据库</li><li>storage : 表示云存储</li><li>function : 表示云函数</li><li>postgresql：表示postgresql数据库</li></ul><p><strong>该字段不可为空</strong></p>
                     * @return Resources <p>资源类型。代表新购环境时需要发货哪些资源。<br>可取值以及含义：</p><ul><li>flexdb : 表示文档型数据库</li><li>storage : 表示云存储</li><li>function : 表示云函数</li><li>postgresql：表示postgresql数据库</li></ul><p><strong>该字段不可为空</strong></p>
                     * 
                     */
                    std::vector<std::string> GetResources() const;

                    /**
                     * 设置<p>资源类型。代表新购环境时需要发货哪些资源。<br>可取值以及含义：</p><ul><li>flexdb : 表示文档型数据库</li><li>storage : 表示云存储</li><li>function : 表示云函数</li><li>postgresql：表示postgresql数据库</li></ul><p><strong>该字段不可为空</strong></p>
                     * @param _resources <p>资源类型。代表新购环境时需要发货哪些资源。<br>可取值以及含义：</p><ul><li>flexdb : 表示文档型数据库</li><li>storage : 表示云存储</li><li>function : 表示云函数</li><li>postgresql：表示postgresql数据库</li></ul><p><strong>该字段不可为空</strong></p>
                     * 
                     */
                    void SetResources(const std::vector<std::string>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>购买实例的时长，单位：月。取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24。<br>默认值为1，即1个月。</p>
                     * @return Period <p>购买实例的时长，单位：月。取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24。<br>默认值为1，即1个月。</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>购买实例的时长，单位：月。取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24。<br>默认值为1，即1个月。</p>
                     * @param _period <p>购买实例的时长，单位：月。取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24。<br>默认值为1，即1个月。</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>是否自动选择代金券支付。</p>
                     * @return AutoVoucher <p>是否自动选择代金券支付。</p>
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券支付。</p>
                     * @param _autoVoucher <p>是否自动选择代金券支付。</p>
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>环境标签。<br>可取值通过接口 <a href="https://cloud.tencent.com/document/product/651/35316">tag:DescribeTags</a> 可获取到。<br>不传或为空则默认不打任何标签。</p>
                     * @return Tags <p>环境标签。<br>可取值通过接口 <a href="https://cloud.tencent.com/document/product/651/35316">tag:DescribeTags</a> 可获取到。<br>不传或为空则默认不打任何标签。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>环境标签。<br>可取值通过接口 <a href="https://cloud.tencent.com/document/product/651/35316">tag:DescribeTags</a> 可获取到。<br>不传或为空则默认不打任何标签。</p>
                     * @param _tags <p>环境标签。<br>可取值通过接口 <a href="https://cloud.tencent.com/document/product/651/35316">tag:DescribeTags</a> 可获取到。<br>不传或为空则默认不打任何标签。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识。取值范围：</p><ul><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（需要手动续费，可通过接口 <a href="https://cloud.tencent.com/document/product/876/128590">RenewEnv</a> 来续费）</li></ul><p>默认取值：NOTIFY_AND_MANUAL_RENEW。<br>若该参数指定为NOTIFY_AND_AUTO_RENEW（即：自动续费），在账户余额充足的情况下，实例到期后将按月自动续费；但如果账户余额不足，将无法自动续费。请留意腾讯云短信和邮件通知。</p>
                     * @return RenewFlag <p>自动续费标识。取值范围：</p><ul><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（需要手动续费，可通过接口 <a href="https://cloud.tencent.com/document/product/876/128590">RenewEnv</a> 来续费）</li></ul><p>默认取值：NOTIFY_AND_MANUAL_RENEW。<br>若该参数指定为NOTIFY_AND_AUTO_RENEW（即：自动续费），在账户余额充足的情况下，实例到期后将按月自动续费；但如果账户余额不足，将无法自动续费。请留意腾讯云短信和邮件通知。</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识。取值范围：</p><ul><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（需要手动续费，可通过接口 <a href="https://cloud.tencent.com/document/product/876/128590">RenewEnv</a> 来续费）</li></ul><p>默认取值：NOTIFY_AND_MANUAL_RENEW。<br>若该参数指定为NOTIFY_AND_AUTO_RENEW（即：自动续费），在账户余额充足的情况下，实例到期后将按月自动续费；但如果账户余额不足，将无法自动续费。请留意腾讯云短信和邮件通知。</p>
                     * @param _renewFlag <p>自动续费标识。取值范围：</p><ul><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（需要手动续费，可通过接口 <a href="https://cloud.tencent.com/document/product/876/128590">RenewEnv</a> 来续费）</li></ul><p>默认取值：NOTIFY_AND_MANUAL_RENEW。<br>若该参数指定为NOTIFY_AND_AUTO_RENEW（即：自动续费），在账户余额充足的情况下，实例到期后将按月自动续费；但如果账户余额不足，将无法自动续费。请留意腾讯云短信和邮件通知。</p>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>云存储外部存储源。<br>表示该环境下不再自动分配云存储cos桶，而是由指定的bucket作为该环境的云存储介质。</p><p>仅当 Resources 中包含storage时有效。</p>
                     * @return ExternalStorage <p>云存储外部存储源。<br>表示该环境下不再自动分配云存储cos桶，而是由指定的bucket作为该环境的云存储介质。</p><p>仅当 Resources 中包含storage时有效。</p>
                     * 
                     */
                    ExternalStorage GetExternalStorage() const;

                    /**
                     * 设置<p>云存储外部存储源。<br>表示该环境下不再自动分配云存储cos桶，而是由指定的bucket作为该环境的云存储介质。</p><p>仅当 Resources 中包含storage时有效。</p>
                     * @param _externalStorage <p>云存储外部存储源。<br>表示该环境下不再自动分配云存储cos桶，而是由指定的bucket作为该环境的云存储介质。</p><p>仅当 Resources 中包含storage时有效。</p>
                     * 
                     */
                    void SetExternalStorage(const ExternalStorage& _externalStorage);

                    /**
                     * 判断参数 ExternalStorage 是否已赋值
                     * @return ExternalStorage 是否已赋值
                     * 
                     */
                    bool ExternalStorageHasBeenSet() const;

                    /**
                     * 获取<p>开启或关闭 超限转按量。 可取值： TRUE/FALSE （字符串类型） 非法制、不传、为空 则不变更该字段。</p>
                     * @return EnableOverrun <p>开启或关闭 超限转按量。 可取值： TRUE/FALSE （字符串类型） 非法制、不传、为空 则不变更该字段。</p>
                     * 
                     */
                    std::string GetEnableOverrun() const;

                    /**
                     * 设置<p>开启或关闭 超限转按量。 可取值： TRUE/FALSE （字符串类型） 非法制、不传、为空 则不变更该字段。</p>
                     * @param _enableOverrun <p>开启或关闭 超限转按量。 可取值： TRUE/FALSE （字符串类型） 非法制、不传、为空 则不变更该字段。</p>
                     * 
                     */
                    void SetEnableOverrun(const std::string& _enableOverrun);

                    /**
                     * 判断参数 EnableOverrun 是否已赋值
                     * @return EnableOverrun 是否已赋值
                     * 
                     */
                    bool EnableOverrunHasBeenSet() const;

                private:

                    /**
                     * <p>环境别名。</p><h3 id=".E6.A0.BC.E5.BC.8F.E8.A6.81.E6.B1.82">格式要求</h3><ul><li>可选字符： 小写字母(a~z)、数字、减号(-)</li><li>不能以 减号(-) 开头或结尾</li><li>不能有连个连续的 减号(-)</li><li>长度不超过20位<br>示例值：cloud</li></ul>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>云开发环境套餐Id。<br>对于云开发环境套餐，可通过 <a href="https://cloud.tencent.com/document/product/876/78167">DescribeBaasPackageList</a> 接口获取，对应其出参的PackageName。</p>
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * <p>资源类型。代表新购环境时需要发货哪些资源。<br>可取值以及含义：</p><ul><li>flexdb : 表示文档型数据库</li><li>storage : 表示云存储</li><li>function : 表示云函数</li><li>postgresql：表示postgresql数据库</li></ul><p><strong>该字段不可为空</strong></p>
                     */
                    std::vector<std::string> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>购买实例的时长，单位：月。取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24。<br>默认值为1，即1个月。</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>是否自动选择代金券支付。</p>
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>环境标签。<br>可取值通过接口 <a href="https://cloud.tencent.com/document/product/651/35316">tag:DescribeTags</a> 可获取到。<br>不传或为空则默认不打任何标签。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自动续费标识。取值范围：</p><ul><li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li><li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费（需要手动续费，可通过接口 <a href="https://cloud.tencent.com/document/product/876/128590">RenewEnv</a> 来续费）</li></ul><p>默认取值：NOTIFY_AND_MANUAL_RENEW。<br>若该参数指定为NOTIFY_AND_AUTO_RENEW（即：自动续费），在账户余额充足的情况下，实例到期后将按月自动续费；但如果账户余额不足，将无法自动续费。请留意腾讯云短信和邮件通知。</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>云存储外部存储源。<br>表示该环境下不再自动分配云存储cos桶，而是由指定的bucket作为该环境的云存储介质。</p><p>仅当 Resources 中包含storage时有效。</p>
                     */
                    ExternalStorage m_externalStorage;
                    bool m_externalStorageHasBeenSet;

                    /**
                     * <p>开启或关闭 超限转按量。 可取值： TRUE/FALSE （字符串类型） 非法制、不传、为空 则不变更该字段。</p>
                     */
                    std::string m_enableOverrun;
                    bool m_enableOverrunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEENVREQUEST_H_
