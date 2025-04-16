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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 描述DLC托管存储基本信息
                */
                class LakeFsInfo : public AbstractModel
                {
                public:
                    LakeFsInfo();
                    ~LakeFsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管存储名称
                     * @return Name 托管存储名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置托管存储名称
                     * @param _name 托管存储名称
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
                     * 获取托管存储类型
                     * @return Type 托管存储类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置托管存储类型
                     * @param _type 托管存储类型
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
                     * 获取容量
                     * @return SpaceUsedSize 容量
                     * 
                     */
                    double GetSpaceUsedSize() const;

                    /**
                     * 设置容量
                     * @param _spaceUsedSize 容量
                     * 
                     */
                    void SetSpaceUsedSize(const double& _spaceUsedSize);

                    /**
                     * 判断参数 SpaceUsedSize 是否已赋值
                     * @return SpaceUsedSize 是否已赋值
                     * 
                     */
                    bool SpaceUsedSizeHasBeenSet() const;

                    /**
                     * 获取创建时候的时间戳
                     * @return CreateTimeStamp 创建时候的时间戳
                     * 
                     */
                    int64_t GetCreateTimeStamp() const;

                    /**
                     * 设置创建时候的时间戳
                     * @param _createTimeStamp 创建时候的时间戳
                     * 
                     */
                    void SetCreateTimeStamp(const int64_t& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     * 
                     */
                    bool CreateTimeStampHasBeenSet() const;

                    /**
                     * 获取是否是用户默认桶，0：默认桶，1：非默认桶
                     * @return DefaultBucket 是否是用户默认桶，0：默认桶，1：非默认桶
                     * 
                     */
                    int64_t GetDefaultBucket() const;

                    /**
                     * 设置是否是用户默认桶，0：默认桶，1：非默认桶
                     * @param _defaultBucket 是否是用户默认桶，0：默认桶，1：非默认桶
                     * 
                     */
                    void SetDefaultBucket(const int64_t& _defaultBucket);

                    /**
                     * 判断参数 DefaultBucket 是否已赋值
                     * @return DefaultBucket 是否已赋值
                     * 
                     */
                    bool DefaultBucketHasBeenSet() const;

                    /**
                     * 获取托管存储short name
                     * @return ShortName 托管存储short name
                     * 
                     */
                    std::string GetShortName() const;

                    /**
                     * 设置托管存储short name
                     * @param _shortName 托管存储short name
                     * 
                     */
                    void SetShortName(const std::string& _shortName);

                    /**
                     * 判断参数 ShortName 是否已赋值
                     * @return ShortName 是否已赋值
                     * 
                     */
                    bool ShortNameHasBeenSet() const;

                    /**
                     * 获取桶描述信息
                     * @return Description 桶描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置桶描述信息
                     * @param _description 桶描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取托管桶状态，当前取值为：creating、bind、readOnly、isolate
                     * @return Status 托管桶状态，当前取值为：creating、bind、readOnly、isolate
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置托管桶状态，当前取值为：creating、bind、readOnly、isolate
                     * @param _status 托管桶状态，当前取值为：creating、bind、readOnly、isolate
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 托管存储名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 托管存储类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 容量
                     */
                    double m_spaceUsedSize;
                    bool m_spaceUsedSizeHasBeenSet;

                    /**
                     * 创建时候的时间戳
                     */
                    int64_t m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                    /**
                     * 是否是用户默认桶，0：默认桶，1：非默认桶
                     */
                    int64_t m_defaultBucket;
                    bool m_defaultBucketHasBeenSet;

                    /**
                     * 托管存储short name
                     */
                    std::string m_shortName;
                    bool m_shortNameHasBeenSet;

                    /**
                     * 桶描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 托管桶状态，当前取值为：creating、bind、readOnly、isolate
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_
