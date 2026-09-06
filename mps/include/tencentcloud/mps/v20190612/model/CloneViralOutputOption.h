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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALOUTPUTOPTION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALOUTPUTOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CloneViralCosInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 爆款复刻输出配置
                */
                class CloneViralOutputOption : public AbstractModel
                {
                public:
                    CloneViralOutputOption();
                    ~CloneViralOutputOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输出类型。默认url</p><p>枚举值：</p><ul><li>url： 临时链接，有效期24小时</li><li>cos： 指定cos桶和路径</li></ul>
                     * @return Type <p>输出类型。默认url</p><p>枚举值：</p><ul><li>url： 临时链接，有效期24小时</li><li>cos： 指定cos桶和路径</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>输出类型。默认url</p><p>枚举值：</p><ul><li>url： 临时链接，有效期24小时</li><li>cos： 指定cos桶和路径</li></ul>
                     * @param _type <p>输出类型。默认url</p><p>枚举值：</p><ul><li>url： 临时链接，有效期24小时</li><li>cos： 指定cos桶和路径</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义cos信息</p>
                     * @return CosInfo <p>自定义cos信息</p>
                     * 
                     */
                    CloneViralCosInfo GetCosInfo() const;

                    /**
                     * 设置<p>自定义cos信息</p>
                     * @param _cosInfo <p>自定义cos信息</p>
                     * 
                     */
                    void SetCosInfo(const CloneViralCosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                private:

                    /**
                     * <p>输出类型。默认url</p><p>枚举值：</p><ul><li>url： 临时链接，有效期24小时</li><li>cos： 指定cos桶和路径</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>自定义cos信息</p>
                     */
                    CloneViralCosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALOUTPUTOPTION_H_
