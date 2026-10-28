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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FORMATCONFIGS_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FORMATCONFIGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同对比查询结果过滤项配置列表
                */
                class FormatConfigs : public AbstractModel
                {
                public:
                    FormatConfigs();
                    ~FormatConfigs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同对比结果过滤项</p><p>枚举值：</p><ul><li>1： 标点符号</li><li>2： 页眉页脚（包含页码）</li><li>3： 目录</li><li>4： 印章</li><li>5： 序号</li><li>6： 水印</li><li>7： 下划线</li></ul>
                     * @return Values <p>合同对比结果过滤项</p><p>枚举值：</p><ul><li>1： 标点符号</li><li>2： 页眉页脚（包含页码）</li><li>3： 目录</li><li>4： 印章</li><li>5： 序号</li><li>6： 水印</li><li>7： 下划线</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetValues() const;

                    /**
                     * 设置<p>合同对比结果过滤项</p><p>枚举值：</p><ul><li>1： 标点符号</li><li>2： 页眉页脚（包含页码）</li><li>3： 目录</li><li>4： 印章</li><li>5： 序号</li><li>6： 水印</li><li>7： 下划线</li></ul>
                     * @param _values <p>合同对比结果过滤项</p><p>枚举值：</p><ul><li>1： 标点符号</li><li>2： 页眉页脚（包含页码）</li><li>3： 目录</li><li>4： 印章</li><li>5： 序号</li><li>6： 水印</li><li>7： 下划线</li></ul>
                     * 
                     */
                    void SetValues(const std::vector<int64_t>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <p>合同对比结果过滤项</p><p>枚举值：</p><ul><li>1： 标点符号</li><li>2： 页眉页脚（包含页码）</li><li>3： 目录</li><li>4： 印章</li><li>5： 序号</li><li>6： 水印</li><li>7： 下划线</li></ul>
                     */
                    std::vector<int64_t> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FORMATCONFIGS_H_
