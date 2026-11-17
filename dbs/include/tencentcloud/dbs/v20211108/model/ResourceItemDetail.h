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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_RESOURCEITEMDETAIL_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_RESOURCEITEMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份集状态详情
                */
                class ResourceItemDetail : public AbstractModel
                {
                public:
                    ResourceItemDetail();
                    ~ResourceItemDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前存储状态。可能的取值为："standard" - 标准存储；"lowFrequency" - 低频存储；"archive" - 归档存储；"deepArchive" - 深度归档存储；</p>
                     * @return TieredType <p>当前存储状态。可能的取值为："standard" - 标准存储；"lowFrequency" - 低频存储；"archive" - 归档存储；"deepArchive" - 深度归档存储；</p>
                     * 
                     */
                    std::string GetTieredType() const;

                    /**
                     * 设置<p>当前存储状态。可能的取值为："standard" - 标准存储；"lowFrequency" - 低频存储；"archive" - 归档存储；"deepArchive" - 深度归档存储；</p>
                     * @param _tieredType <p>当前存储状态。可能的取值为："standard" - 标准存储；"lowFrequency" - 低频存储；"archive" - 归档存储；"deepArchive" - 深度归档存储；</p>
                     * 
                     */
                    void SetTieredType(const std::string& _tieredType);

                    /**
                     * 判断参数 TieredType 是否已赋值
                     * @return TieredType 是否已赋值
                     * 
                     */
                    bool TieredTypeHasBeenSet() const;

                    /**
                     * 获取<p>存储时长。备份集已保留的时长，单位为小时。</p>
                     * @return StayTime <p>存储时长。备份集已保留的时长，单位为小时。</p>
                     * 
                     */
                    double GetStayTime() const;

                    /**
                     * 设置<p>存储时长。备份集已保留的时长，单位为小时。</p>
                     * @param _stayTime <p>存储时长。备份集已保留的时长，单位为小时。</p>
                     * 
                     */
                    void SetStayTime(const double& _stayTime);

                    /**
                     * 判断参数 StayTime 是否已赋值
                     * @return StayTime 是否已赋值
                     * 
                     */
                    bool StayTimeHasBeenSet() const;

                private:

                    /**
                     * <p>当前存储状态。可能的取值为："standard" - 标准存储；"lowFrequency" - 低频存储；"archive" - 归档存储；"deepArchive" - 深度归档存储；</p>
                     */
                    std::string m_tieredType;
                    bool m_tieredTypeHasBeenSet;

                    /**
                     * <p>存储时长。备份集已保留的时长，单位为小时。</p>
                     */
                    double m_stayTime;
                    bool m_stayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_RESOURCEITEMDETAIL_H_
