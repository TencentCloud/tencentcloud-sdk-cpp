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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_EQUITY_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_EQUITY_H_

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
                * 股权路径
                */
                class Equity : public AbstractModel
                {
                public:
                    Equity();
                    ~Equity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>企业ID</p>
                     * @return EnterpriseUid <p>企业ID</p>
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _enterpriseUid <p>企业ID</p>
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>持股比例</p>
                     * @return ShareholdingRatio <p>持股比例</p>
                     * 
                     */
                    std::string GetShareholdingRatio() const;

                    /**
                     * 设置<p>持股比例</p>
                     * @param _shareholdingRatio <p>持股比例</p>
                     * 
                     */
                    void SetShareholdingRatio(const std::string& _shareholdingRatio);

                    /**
                     * 判断参数 ShareholdingRatio 是否已赋值
                     * @return ShareholdingRatio 是否已赋值
                     * 
                     */
                    bool ShareholdingRatioHasBeenSet() const;

                private:

                    /**
                     * <p>企业ID</p>
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>持股比例</p>
                     */
                    std::string m_shareholdingRatio;
                    bool m_shareholdingRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_EQUITY_H_
