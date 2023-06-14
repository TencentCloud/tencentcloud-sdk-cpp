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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEAGEGROUPAVRSTAYTIME_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEAGEGROUPAVRSTAYTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 区域性别平均停留时间子结构
                */
                class ZoneAgeGroupAvrStayTime : public AbstractModel
                {
                public:
                    ZoneAgeGroupAvrStayTime();
                    ~ZoneAgeGroupAvrStayTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取男性平均停留时间
                     * @return MaleAvrStayTime 男性平均停留时间
                     * 
                     */
                    double GetMaleAvrStayTime() const;

                    /**
                     * 设置男性平均停留时间
                     * @param _maleAvrStayTime 男性平均停留时间
                     * 
                     */
                    void SetMaleAvrStayTime(const double& _maleAvrStayTime);

                    /**
                     * 判断参数 MaleAvrStayTime 是否已赋值
                     * @return MaleAvrStayTime 是否已赋值
                     * 
                     */
                    bool MaleAvrStayTimeHasBeenSet() const;

                    /**
                     * 获取女性平均停留时间
                     * @return FemaleAvrStayTime 女性平均停留时间
                     * 
                     */
                    double GetFemaleAvrStayTime() const;

                    /**
                     * 设置女性平均停留时间
                     * @param _femaleAvrStayTime 女性平均停留时间
                     * 
                     */
                    void SetFemaleAvrStayTime(const double& _femaleAvrStayTime);

                    /**
                     * 判断参数 FemaleAvrStayTime 是否已赋值
                     * @return FemaleAvrStayTime 是否已赋值
                     * 
                     */
                    bool FemaleAvrStayTimeHasBeenSet() const;

                private:

                    /**
                     * 男性平均停留时间
                     */
                    double m_maleAvrStayTime;
                    bool m_maleAvrStayTimeHasBeenSet;

                    /**
                     * 女性平均停留时间
                     */
                    double m_femaleAvrStayTime;
                    bool m_femaleAvrStayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_ZONEAGEGROUPAVRSTAYTIME_H_
