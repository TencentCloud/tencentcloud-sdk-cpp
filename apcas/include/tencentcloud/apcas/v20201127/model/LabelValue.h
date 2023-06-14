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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_LABELVALUE_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_LABELVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 标签数据
                */
                class LabelValue : public AbstractModel
                {
                public:
                    LabelValue();
                    ~LabelValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签覆盖率占比（在整个上传的ID列表中的覆盖率）
                     * @return Proportion 标签覆盖率占比（在整个上传的ID列表中的覆盖率）
                     * 
                     */
                    double GetProportion() const;

                    /**
                     * 设置标签覆盖率占比（在整个上传的ID列表中的覆盖率）
                     * @param _proportion 标签覆盖率占比（在整个上传的ID列表中的覆盖率）
                     * 
                     */
                    void SetProportion(const double& _proportion);

                    /**
                     * 判断参数 Proportion 是否已赋值
                     * @return Proportion 是否已赋值
                     * 
                     */
                    bool ProportionHasBeenSet() const;

                    /**
                     * 获取标签大盘覆盖率占比
                     * @return Market 标签大盘覆盖率占比
                     * 
                     */
                    double GetMarket() const;

                    /**
                     * 设置标签大盘覆盖率占比
                     * @param _market 标签大盘覆盖率占比
                     * 
                     */
                    void SetMarket(const double& _market);

                    /**
                     * 判断参数 Market 是否已赋值
                     * @return Market 是否已赋值
                     * 
                     */
                    bool MarketHasBeenSet() const;

                    /**
                     * 获取TGI指数，由Proportion除以Market得到
                     * @return Tgi TGI指数，由Proportion除以Market得到
                     * 
                     */
                    double GetTgi() const;

                    /**
                     * 设置TGI指数，由Proportion除以Market得到
                     * @param _tgi TGI指数，由Proportion除以Market得到
                     * 
                     */
                    void SetTgi(const double& _tgi);

                    /**
                     * 判断参数 Tgi 是否已赋值
                     * @return Tgi 是否已赋值
                     * 
                     */
                    bool TgiHasBeenSet() const;

                private:

                    /**
                     * 标签覆盖率占比（在整个上传的ID列表中的覆盖率）
                     */
                    double m_proportion;
                    bool m_proportionHasBeenSet;

                    /**
                     * 标签大盘覆盖率占比
                     */
                    double m_market;
                    bool m_marketHasBeenSet;

                    /**
                     * TGI指数，由Proportion除以Market得到
                     */
                    double m_tgi;
                    bool m_tgiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_LABELVALUE_H_
