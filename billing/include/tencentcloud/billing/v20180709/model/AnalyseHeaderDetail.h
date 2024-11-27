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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEHEADERDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEHEADERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AnalyseHeaderTimeDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 成本分析表头数据复杂类型
                */
                class AnalyseHeaderDetail : public AbstractModel
                {
                public:
                    AnalyseHeaderDetail();
                    ~AnalyseHeaderDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表头日期
                     * @return HeadDetail 表头日期
                     * 
                     */
                    std::vector<AnalyseHeaderTimeDetail> GetHeadDetail() const;

                    /**
                     * 设置表头日期
                     * @param _headDetail 表头日期
                     * 
                     */
                    void SetHeadDetail(const std::vector<AnalyseHeaderTimeDetail>& _headDetail);

                    /**
                     * 判断参数 HeadDetail 是否已赋值
                     * @return HeadDetail 是否已赋值
                     * 
                     */
                    bool HeadDetailHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return Name 时间
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置时间
                     * @param _name 时间
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
                     * 获取总计
                     * @return Total 总计
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置总计
                     * @param _total 总计
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 表头日期
                     */
                    std::vector<AnalyseHeaderTimeDetail> m_headDetail;
                    bool m_headDetailHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 总计
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEHEADERDETAIL_H_
