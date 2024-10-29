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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUTENCENTVOD_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUTENCENTVOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Mcu转推录制，腾讯云点播相关参数。
                */
                class McuTencentVod : public AbstractModel
                {
                public:
                    McuTencentVod();
                    ~McuTencentVod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 创建任务流模板 并为模板命名。
                     * @return Procedure 媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 创建任务流模板 并为模板命名。
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 创建任务流模板 并为模板命名。
                     * @param _procedure 媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 创建任务流模板 并为模板命名。
                     * 
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     * 
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取媒体文件过期时间，为当前时间的绝对过期时间；保存一天，就填"86400"，永久保存就填"0"，默认永久保存。
                     * @return ExpireTime 媒体文件过期时间，为当前时间的绝对过期时间；保存一天，就填"86400"，永久保存就填"0"，默认永久保存。
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置媒体文件过期时间，为当前时间的绝对过期时间；保存一天，就填"86400"，永久保存就填"0"，默认永久保存。
                     * @param _expireTime 媒体文件过期时间，为当前时间的绝对过期时间；保存一天，就填"86400"，永久保存就填"0"，默认永久保存。
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * @return StorageRegion 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * @param _storageRegion 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取分类ID，用于对媒体进行分类管理，可通过 创建分类 接口，创建分类，获得分类 ID。
默认值：0，表示其他分类。
                     * @return ClassId 分类ID，用于对媒体进行分类管理，可通过 创建分类 接口，创建分类，获得分类 ID。
默认值：0，表示其他分类。
                     * 
                     */
                    uint64_t GetClassId() const;

                    /**
                     * 设置分类ID，用于对媒体进行分类管理，可通过 创建分类 接口，创建分类，获得分类 ID。
默认值：0，表示其他分类。
                     * @param _classId 分类ID，用于对媒体进行分类管理，可通过 创建分类 接口，创建分类，获得分类 ID。
默认值：0，表示其他分类。
                     * 
                     */
                    void SetClassId(const uint64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取点播 子应用 ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播 子应用 ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播 子应用 ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param _subAppId 点播 子应用 ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取任务流上下文，任务完成回调时透传。
                     * @return SessionContext 任务流上下文，任务完成回调时透传。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置任务流上下文，任务完成回调时透传。
                     * @param _sessionContext 任务流上下文，任务完成回调时透传。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取上传上下文，上传完成回调时透传。
                     * @return SourceContext 上传上下文，上传完成回调时透传。
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置上传上下文，上传完成回调时透传。
                     * @param _sourceContext 上传上下文，上传完成回调时透传。
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                private:

                    /**
                     * 媒体后续任务处理操作，即完成媒体上传后，可自动发起任务流操作。参数值为任务流模板名，云点播支持 创建任务流模板 并为模板命名。
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * 媒体文件过期时间，为当前时间的绝对过期时间；保存一天，就填"86400"，永久保存就填"0"，默认永久保存。
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 指定上传园区，仅适用于对上传地域有特殊需求的用户。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 分类ID，用于对媒体进行分类管理，可通过 创建分类 接口，创建分类，获得分类 ID。
默认值：0，表示其他分类。
                     */
                    uint64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 点播 子应用 ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 任务流上下文，任务完成回调时透传。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 上传上下文，上传完成回调时透传。
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUTENCENTVOD_H_
