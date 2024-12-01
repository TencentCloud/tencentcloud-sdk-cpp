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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_EYECHILDITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_EYECHILDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BaseItem3.h>
#include <tencentcloud/mrs/v20200910/model/BaseItem2.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 眼科子结构
                */
                class EyeChildItem : public AbstractModel
                {
                public:
                    EyeChildItem();
                    ~EyeChildItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取球镜
                     * @return Sph 球镜
                     * 
                     */
                    std::vector<BaseItem3> GetSph() const;

                    /**
                     * 设置球镜
                     * @param _sph 球镜
                     * 
                     */
                    void SetSph(const std::vector<BaseItem3>& _sph);

                    /**
                     * 判断参数 Sph 是否已赋值
                     * @return Sph 是否已赋值
                     * 
                     */
                    bool SphHasBeenSet() const;

                    /**
                     * 获取柱镜
                     * @return Cyl 柱镜
                     * 
                     */
                    std::vector<BaseItem3> GetCyl() const;

                    /**
                     * 设置柱镜
                     * @param _cyl 柱镜
                     * 
                     */
                    void SetCyl(const std::vector<BaseItem3>& _cyl);

                    /**
                     * 判断参数 Cyl 是否已赋值
                     * @return Cyl 是否已赋值
                     * 
                     */
                    bool CylHasBeenSet() const;

                    /**
                     * 获取轴位
                     * @return Ax 轴位
                     * 
                     */
                    std::vector<BaseItem3> GetAx() const;

                    /**
                     * 设置轴位
                     * @param _ax 轴位
                     * 
                     */
                    void SetAx(const std::vector<BaseItem3>& _ax);

                    /**
                     * 判断参数 Ax 是否已赋值
                     * @return Ax 是否已赋值
                     * 
                     */
                    bool AxHasBeenSet() const;

                    /**
                     * 获取等效球镜
                     * @return Se 等效球镜
                     * 
                     */
                    BaseItem2 GetSe() const;

                    /**
                     * 设置等效球镜
                     * @param _se 等效球镜
                     * 
                     */
                    void SetSe(const BaseItem2& _se);

                    /**
                     * 判断参数 Se 是否已赋值
                     * @return Se 是否已赋值
                     * 
                     */
                    bool SeHasBeenSet() const;

                private:

                    /**
                     * 球镜
                     */
                    std::vector<BaseItem3> m_sph;
                    bool m_sphHasBeenSet;

                    /**
                     * 柱镜
                     */
                    std::vector<BaseItem3> m_cyl;
                    bool m_cylHasBeenSet;

                    /**
                     * 轴位
                     */
                    std::vector<BaseItem3> m_ax;
                    bool m_axHasBeenSet;

                    /**
                     * 等效球镜
                     */
                    BaseItem2 m_se;
                    bool m_seHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_EYECHILDITEM_H_
