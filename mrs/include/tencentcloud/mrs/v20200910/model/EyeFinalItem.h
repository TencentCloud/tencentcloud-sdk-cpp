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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_EYEFINALITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_EYEFINALITEM_H_

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
                * 眼科子结构 平均后结果
                */
                class EyeFinalItem : public AbstractModel
                {
                public:
                    EyeFinalItem();
                    ~EyeFinalItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>球镜</p>
                     * @return Sph <p>球镜</p>
                     * 
                     */
                    BaseItem3 GetSph() const;

                    /**
                     * 设置<p>球镜</p>
                     * @param _sph <p>球镜</p>
                     * 
                     */
                    void SetSph(const BaseItem3& _sph);

                    /**
                     * 判断参数 Sph 是否已赋值
                     * @return Sph 是否已赋值
                     * 
                     */
                    bool SphHasBeenSet() const;

                    /**
                     * 获取<p>柱镜</p>
                     * @return Cyl <p>柱镜</p>
                     * 
                     */
                    BaseItem3 GetCyl() const;

                    /**
                     * 设置<p>柱镜</p>
                     * @param _cyl <p>柱镜</p>
                     * 
                     */
                    void SetCyl(const BaseItem3& _cyl);

                    /**
                     * 判断参数 Cyl 是否已赋值
                     * @return Cyl 是否已赋值
                     * 
                     */
                    bool CylHasBeenSet() const;

                    /**
                     * 获取<p>轴位</p>
                     * @return Ax <p>轴位</p>
                     * 
                     */
                    BaseItem3 GetAx() const;

                    /**
                     * 设置<p>轴位</p>
                     * @param _ax <p>轴位</p>
                     * 
                     */
                    void SetAx(const BaseItem3& _ax);

                    /**
                     * 判断参数 Ax 是否已赋值
                     * @return Ax 是否已赋值
                     * 
                     */
                    bool AxHasBeenSet() const;

                    /**
                     * 获取<p>等效球镜</p>
                     * @return Se <p>等效球镜</p>
                     * 
                     */
                    BaseItem2 GetSe() const;

                    /**
                     * 设置<p>等效球镜</p>
                     * @param _se <p>等效球镜</p>
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
                     * <p>球镜</p>
                     */
                    BaseItem3 m_sph;
                    bool m_sphHasBeenSet;

                    /**
                     * <p>柱镜</p>
                     */
                    BaseItem3 m_cyl;
                    bool m_cylHasBeenSet;

                    /**
                     * <p>轴位</p>
                     */
                    BaseItem3 m_ax;
                    bool m_axHasBeenSet;

                    /**
                     * <p>等效球镜</p>
                     */
                    BaseItem2 m_se;
                    bool m_seHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_EYEFINALITEM_H_
