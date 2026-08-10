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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KBDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KBDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulBriefInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Windows KB详细信息
                */
                class KBDetail : public AbstractModel
                {
                public:
                    KBDetail();
                    ~KBDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>KB 补丁内部 ID（kb_info.id）</p>
                     * @return ID <p>KB 补丁内部 ID（kb_info.id）</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>KB 补丁内部 ID（kb_info.id）</p>
                     * @param _iD <p>KB 补丁内部 ID（kb_info.id）</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>KB 编号<br>参数格式：形如 KB5001234</p>
                     * @return Number <p>KB 编号<br>参数格式：形如 KB5001234</p>
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置<p>KB 编号<br>参数格式：形如 KB5001234</p>
                     * @param _number <p>KB 编号<br>参数格式：形如 KB5001234</p>
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>KB 补丁名称</p>
                     * @return Name <p>KB 补丁名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>KB 补丁名称</p>
                     * @param _name <p>KB 补丁名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>参考链接（微软官方文档地址）</p>
                     * @return ReferUrl <p>参考链接（微软官方文档地址）</p>
                     * 
                     */
                    std::string GetReferUrl() const;

                    /**
                     * 设置<p>参考链接（微软官方文档地址）</p>
                     * @param _referUrl <p>参考链接（微软官方文档地址）</p>
                     * 
                     */
                    void SetReferUrl(const std::string& _referUrl);

                    /**
                     * 判断参数 ReferUrl 是否已赋值
                     * @return ReferUrl 是否已赋值
                     * 
                     */
                    bool ReferUrlHasBeenSet() const;

                    /**
                     * 获取<p>发布时间<br>参数格式：YYYY-MM-DD HH:mm:ss</p>
                     * @return PublishTime <p>发布时间<br>参数格式：YYYY-MM-DD HH:mm:ss</p>
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置<p>发布时间<br>参数格式：YYYY-MM-DD HH:mm:ss</p>
                     * @param _publishTime <p>发布时间<br>参数格式：YYYY-MM-DD HH:mm:ss</p>
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取<p>安装该 KB 后是否需要重启<br>枚举值：<br>true：需要<br>false：不需要</p>
                     * @return NeedRestart <p>安装该 KB 后是否需要重启<br>枚举值：<br>true：需要<br>false：不需要</p>
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置<p>安装该 KB 后是否需要重启<br>枚举值：<br>true：需要<br>false：不需要</p>
                     * @param _needRestart <p>安装该 KB 后是否需要重启<br>枚举值：<br>true：需要<br>false：不需要</p>
                     * 
                     */
                    void SetNeedRestart(const bool& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取<p>关联漏洞列表</p>
                     * @return RelateVulList <p>关联漏洞列表</p>
                     * 
                     */
                    std::vector<VulBriefInfo> GetRelateVulList() const;

                    /**
                     * 设置<p>关联漏洞列表</p>
                     * @param _relateVulList <p>关联漏洞列表</p>
                     * 
                     */
                    void SetRelateVulList(const std::vector<VulBriefInfo>& _relateVulList);

                    /**
                     * 判断参数 RelateVulList 是否已赋值
                     * @return RelateVulList 是否已赋值
                     * 
                     */
                    bool RelateVulListHasBeenSet() const;

                    /**
                     * 获取<p>关联漏洞总数</p>
                     * @return RelateVulCount <p>关联漏洞总数</p>
                     * 
                     */
                    int64_t GetRelateVulCount() const;

                    /**
                     * 设置<p>关联漏洞总数</p>
                     * @param _relateVulCount <p>关联漏洞总数</p>
                     * 
                     */
                    void SetRelateVulCount(const int64_t& _relateVulCount);

                    /**
                     * 判断参数 RelateVulCount 是否已赋值
                     * @return RelateVulCount 是否已赋值
                     * 
                     */
                    bool RelateVulCountHasBeenSet() const;

                    /**
                     * 获取<p>关联os版本</p>
                     * @return RelateProduct <p>关联os版本</p>
                     * 
                     */
                    std::string GetRelateProduct() const;

                    /**
                     * 设置<p>关联os版本</p>
                     * @param _relateProduct <p>关联os版本</p>
                     * 
                     */
                    void SetRelateProduct(const std::string& _relateProduct);

                    /**
                     * 判断参数 RelateProduct 是否已赋值
                     * @return RelateProduct 是否已赋值
                     * 
                     */
                    bool RelateProductHasBeenSet() const;

                private:

                    /**
                     * <p>KB 补丁内部 ID（kb_info.id）</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>KB 编号<br>参数格式：形如 KB5001234</p>
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>KB 补丁名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>参考链接（微软官方文档地址）</p>
                     */
                    std::string m_referUrl;
                    bool m_referUrlHasBeenSet;

                    /**
                     * <p>发布时间<br>参数格式：YYYY-MM-DD HH:mm:ss</p>
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * <p>安装该 KB 后是否需要重启<br>枚举值：<br>true：需要<br>false：不需要</p>
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * <p>关联漏洞列表</p>
                     */
                    std::vector<VulBriefInfo> m_relateVulList;
                    bool m_relateVulListHasBeenSet;

                    /**
                     * <p>关联漏洞总数</p>
                     */
                    int64_t m_relateVulCount;
                    bool m_relateVulCountHasBeenSet;

                    /**
                     * <p>关联os版本</p>
                     */
                    std::string m_relateProduct;
                    bool m_relateProductHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KBDETAIL_H_
