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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSCROWDDATA_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSCROWDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/SmsCampaignStatisticsTemplateData.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信活动统计人群包数据
                */
                class SmsCampaignStatisticsCrowdData : public AbstractModel
                {
                public:
                    SmsCampaignStatisticsCrowdData();
                    ~SmsCampaignStatisticsCrowdData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人群包id
                     * @return CrowdId 人群包id
                     */
                    uint64_t GetCrowdId() const;

                    /**
                     * 设置人群包id
                     * @param CrowdId 人群包id
                     */
                    void SetCrowdId(const uint64_t& _crowdId);

                    /**
                     * 判断参数 CrowdId 是否已赋值
                     * @return CrowdId 是否已赋值
                     */
                    bool CrowdIdHasBeenSet() const;

                    /**
                     * 获取人群包名称
                     * @return CrowdName 人群包名称
                     */
                    std::string GetCrowdName() const;

                    /**
                     * 设置人群包名称
                     * @param CrowdName 人群包名称
                     */
                    void SetCrowdName(const std::string& _crowdName);

                    /**
                     * 判断参数 CrowdName 是否已赋值
                     * @return CrowdName 是否已赋值
                     */
                    bool CrowdNameHasBeenSet() const;

                    /**
                     * 获取人群包目标触达总数
                     * @return CrowdCount 人群包目标触达总数
                     */
                    uint64_t GetCrowdCount() const;

                    /**
                     * 设置人群包目标触达总数
                     * @param CrowdCount 人群包目标触达总数
                     */
                    void SetCrowdCount(const uint64_t& _crowdCount);

                    /**
                     * 判断参数 CrowdCount 是否已赋值
                     * @return CrowdCount 是否已赋值
                     */
                    bool CrowdCountHasBeenSet() const;

                    /**
                     * 获取模板列表
                     * @return TemplateList 模板列表
                     */
                    std::vector<SmsCampaignStatisticsTemplateData> GetTemplateList() const;

                    /**
                     * 设置模板列表
                     * @param TemplateList 模板列表
                     */
                    void SetTemplateList(const std::vector<SmsCampaignStatisticsTemplateData>& _templateList);

                    /**
                     * 判断参数 TemplateList 是否已赋值
                     * @return TemplateList 是否已赋值
                     */
                    bool TemplateListHasBeenSet() const;

                private:

                    /**
                     * 人群包id
                     */
                    uint64_t m_crowdId;
                    bool m_crowdIdHasBeenSet;

                    /**
                     * 人群包名称
                     */
                    std::string m_crowdName;
                    bool m_crowdNameHasBeenSet;

                    /**
                     * 人群包目标触达总数
                     */
                    uint64_t m_crowdCount;
                    bool m_crowdCountHasBeenSet;

                    /**
                     * 模板列表
                     */
                    std::vector<SmsCampaignStatisticsTemplateData> m_templateList;
                    bool m_templateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSCROWDDATA_H_
