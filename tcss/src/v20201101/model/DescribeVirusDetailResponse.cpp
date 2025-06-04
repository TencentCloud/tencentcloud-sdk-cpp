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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusDetailResponse::DescribeVirusDetailResponse() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processMd5HasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_processArgvHasBeenSet(false),
    m_processChanHasBeenSet(false),
    m_processAccountGroupHasBeenSet(false),
    m_processStartAccountHasBeenSet(false),
    m_processFileAuthorityHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_harmDescribeHasBeenSet(false),
    m_suggestSchemeHasBeenSet(false),
    m_markHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_pProcessStartUserHasBeenSet(false),
    m_pProcessUserGroupHasBeenSet(false),
    m_pProcessPathHasBeenSet(false),
    m_pProcessParamHasBeenSet(false),
    m_ancestorProcessStartUserHasBeenSet(false),
    m_ancestorProcessUserGroupHasBeenSet(false),
    m_ancestorProcessPathHasBeenSet(false),
    m_ancestorProcessParamHasBeenSet(false),
    m_operationTimeHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_containerNetSubStatusHasBeenSet(false),
    m_containerIsolateOperationSrcHasBeenSet(false),
    m_checkPlatformHasBeenSet(false),
    m_fileAccessTimeHasBeenSet(false),
    m_fileModifyTimeHasBeenSet(false),
    m_nodeSubNetIDHasBeenSet(false),
    m_nodeSubNetNameHasBeenSet(false),
    m_nodeSubNetCIDRHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podStatusHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadTypeHasBeenSet(false),
    m_containerStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirusDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ImageId") && !rsp["ImageId"].IsNull())
    {
        if (!rsp["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(rsp["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (rsp.HasMember("ImageName") && !rsp["ImageName"].IsNull())
    {
        if (!rsp["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(rsp["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Size") && !rsp["Size"].IsNull())
    {
        if (!rsp["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = rsp["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (rsp.HasMember("FilePath") && !rsp["FilePath"].IsNull())
    {
        if (!rsp["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(rsp["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("VirusName") && !rsp["VirusName"].IsNull())
    {
        if (!rsp["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(rsp["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevel") && !rsp["RiskLevel"].IsNull())
    {
        if (!rsp["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(rsp["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerName") && !rsp["ContainerName"].IsNull())
    {
        if (!rsp["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(rsp["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerId") && !rsp["ContainerId"].IsNull())
    {
        if (!rsp["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(rsp["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (rsp.HasMember("HostName") && !rsp["HostName"].IsNull())
    {
        if (!rsp["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(rsp["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (rsp.HasMember("HostId") && !rsp["HostId"].IsNull())
    {
        if (!rsp["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(rsp["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessName") && !rsp["ProcessName"].IsNull())
    {
        if (!rsp["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(rsp["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessPath") && !rsp["ProcessPath"].IsNull())
    {
        if (!rsp["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(rsp["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessMd5") && !rsp["ProcessMd5"].IsNull())
    {
        if (!rsp["ProcessMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processMd5 = string(rsp["ProcessMd5"].GetString());
        m_processMd5HasBeenSet = true;
    }

    if (rsp.HasMember("ProcessId") && !rsp["ProcessId"].IsNull())
    {
        if (!rsp["ProcessId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processId = rsp["ProcessId"].GetUint64();
        m_processIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessArgv") && !rsp["ProcessArgv"].IsNull())
    {
        if (!rsp["ProcessArgv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessArgv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processArgv = string(rsp["ProcessArgv"].GetString());
        m_processArgvHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessChan") && !rsp["ProcessChan"].IsNull())
    {
        if (!rsp["ProcessChan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessChan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processChan = string(rsp["ProcessChan"].GetString());
        m_processChanHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessAccountGroup") && !rsp["ProcessAccountGroup"].IsNull())
    {
        if (!rsp["ProcessAccountGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessAccountGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processAccountGroup = string(rsp["ProcessAccountGroup"].GetString());
        m_processAccountGroupHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessStartAccount") && !rsp["ProcessStartAccount"].IsNull())
    {
        if (!rsp["ProcessStartAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessStartAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartAccount = string(rsp["ProcessStartAccount"].GetString());
        m_processStartAccountHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessFileAuthority") && !rsp["ProcessFileAuthority"].IsNull())
    {
        if (!rsp["ProcessFileAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessFileAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processFileAuthority = string(rsp["ProcessFileAuthority"].GetString());
        m_processFileAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("SourceType") && !rsp["SourceType"].IsNull())
    {
        if (!rsp["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = rsp["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("HarmDescribe") && !rsp["HarmDescribe"].IsNull())
    {
        if (!rsp["HarmDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarmDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harmDescribe = string(rsp["HarmDescribe"].GetString());
        m_harmDescribeHasBeenSet = true;
    }

    if (rsp.HasMember("SuggestScheme") && !rsp["SuggestScheme"].IsNull())
    {
        if (!rsp["SuggestScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestScheme = string(rsp["SuggestScheme"].GetString());
        m_suggestSchemeHasBeenSet = true;
    }

    if (rsp.HasMember("Mark") && !rsp["Mark"].IsNull())
    {
        if (!rsp["Mark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mark = string(rsp["Mark"].GetString());
        m_markHasBeenSet = true;
    }

    if (rsp.HasMember("FileName") && !rsp["FileName"].IsNull())
    {
        if (!rsp["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(rsp["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (rsp.HasMember("FileMd5") && !rsp["FileMd5"].IsNull())
    {
        if (!rsp["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(rsp["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (rsp.HasMember("EventType") && !rsp["EventType"].IsNull())
    {
        if (!rsp["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(rsp["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PodName") && !rsp["PodName"].IsNull())
    {
        if (!rsp["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(rsp["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("SubStatus") && !rsp["SubStatus"].IsNull())
    {
        if (!rsp["SubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subStatus = string(rsp["SubStatus"].GetString());
        m_subStatusHasBeenSet = true;
    }

    if (rsp.HasMember("HostIP") && !rsp["HostIP"].IsNull())
    {
        if (!rsp["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(rsp["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (rsp.HasMember("ClientIP") && !rsp["ClientIP"].IsNull())
    {
        if (!rsp["ClientIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIP = string(rsp["ClientIP"].GetString());
        m_clientIPHasBeenSet = true;
    }

    if (rsp.HasMember("PProcessStartUser") && !rsp["PProcessStartUser"].IsNull())
    {
        if (!rsp["PProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pProcessStartUser = string(rsp["PProcessStartUser"].GetString());
        m_pProcessStartUserHasBeenSet = true;
    }

    if (rsp.HasMember("PProcessUserGroup") && !rsp["PProcessUserGroup"].IsNull())
    {
        if (!rsp["PProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pProcessUserGroup = string(rsp["PProcessUserGroup"].GetString());
        m_pProcessUserGroupHasBeenSet = true;
    }

    if (rsp.HasMember("PProcessPath") && !rsp["PProcessPath"].IsNull())
    {
        if (!rsp["PProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pProcessPath = string(rsp["PProcessPath"].GetString());
        m_pProcessPathHasBeenSet = true;
    }

    if (rsp.HasMember("PProcessParam") && !rsp["PProcessParam"].IsNull())
    {
        if (!rsp["PProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pProcessParam = string(rsp["PProcessParam"].GetString());
        m_pProcessParamHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessStartUser") && !rsp["AncestorProcessStartUser"].IsNull())
    {
        if (!rsp["AncestorProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessStartUser = string(rsp["AncestorProcessStartUser"].GetString());
        m_ancestorProcessStartUserHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessUserGroup") && !rsp["AncestorProcessUserGroup"].IsNull())
    {
        if (!rsp["AncestorProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessUserGroup = string(rsp["AncestorProcessUserGroup"].GetString());
        m_ancestorProcessUserGroupHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessPath") && !rsp["AncestorProcessPath"].IsNull())
    {
        if (!rsp["AncestorProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessPath = string(rsp["AncestorProcessPath"].GetString());
        m_ancestorProcessPathHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessParam") && !rsp["AncestorProcessParam"].IsNull())
    {
        if (!rsp["AncestorProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessParam = string(rsp["AncestorProcessParam"].GetString());
        m_ancestorProcessParamHasBeenSet = true;
    }

    if (rsp.HasMember("OperationTime") && !rsp["OperationTime"].IsNull())
    {
        if (!rsp["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(rsp["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerNetStatus") && !rsp["ContainerNetStatus"].IsNull())
    {
        if (!rsp["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(rsp["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerNetSubStatus") && !rsp["ContainerNetSubStatus"].IsNull())
    {
        if (!rsp["ContainerNetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetSubStatus = string(rsp["ContainerNetSubStatus"].GetString());
        m_containerNetSubStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerIsolateOperationSrc") && !rsp["ContainerIsolateOperationSrc"].IsNull())
    {
        if (!rsp["ContainerIsolateOperationSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerIsolateOperationSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerIsolateOperationSrc = string(rsp["ContainerIsolateOperationSrc"].GetString());
        m_containerIsolateOperationSrcHasBeenSet = true;
    }

    if (rsp.HasMember("CheckPlatform") && !rsp["CheckPlatform"].IsNull())
    {
        if (!rsp["CheckPlatform"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckPlatform` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CheckPlatform"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_checkPlatform.push_back((*itr).GetString());
        }
        m_checkPlatformHasBeenSet = true;
    }

    if (rsp.HasMember("FileAccessTime") && !rsp["FileAccessTime"].IsNull())
    {
        if (!rsp["FileAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileAccessTime = string(rsp["FileAccessTime"].GetString());
        m_fileAccessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FileModifyTime") && !rsp["FileModifyTime"].IsNull())
    {
        if (!rsp["FileModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileModifyTime = string(rsp["FileModifyTime"].GetString());
        m_fileModifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetID") && !rsp["NodeSubNetID"].IsNull())
    {
        if (!rsp["NodeSubNetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetID = string(rsp["NodeSubNetID"].GetString());
        m_nodeSubNetIDHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetName") && !rsp["NodeSubNetName"].IsNull())
    {
        if (!rsp["NodeSubNetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetName = string(rsp["NodeSubNetName"].GetString());
        m_nodeSubNetNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetCIDR") && !rsp["NodeSubNetCIDR"].IsNull())
    {
        if (!rsp["NodeSubNetCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetCIDR = string(rsp["NodeSubNetCIDR"].GetString());
        m_nodeSubNetCIDRHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterID") && !rsp["ClusterID"].IsNull())
    {
        if (!rsp["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(rsp["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (rsp.HasMember("PodIP") && !rsp["PodIP"].IsNull())
    {
        if (!rsp["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(rsp["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (rsp.HasMember("PodStatus") && !rsp["PodStatus"].IsNull())
    {
        if (!rsp["PodStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podStatus = string(rsp["PodStatus"].GetString());
        m_podStatusHasBeenSet = true;
    }

    if (rsp.HasMember("NodeUniqueID") && !rsp["NodeUniqueID"].IsNull())
    {
        if (!rsp["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(rsp["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (rsp.HasMember("NodeType") && !rsp["NodeType"].IsNull())
    {
        if (!rsp["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(rsp["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("NodeID") && !rsp["NodeID"].IsNull())
    {
        if (!rsp["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(rsp["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (rsp.HasMember("WorkloadType") && !rsp["WorkloadType"].IsNull())
    {
        if (!rsp["WorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadType = string(rsp["WorkloadType"].GetString());
        m_workloadTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerStatus") && !rsp["ContainerStatus"].IsNull())
    {
        if (!rsp["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(rsp["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVirusDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_processMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processId, allocator);
    }

    if (m_processArgvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessArgv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processArgv.c_str(), allocator).Move(), allocator);
    }

    if (m_processChanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessChan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processChan.c_str(), allocator).Move(), allocator);
    }

    if (m_processAccountGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessAccountGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processAccountGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_processStartAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStartAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_processFileAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessFileAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processFileAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_harmDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarmDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harmDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_markHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mark.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_pProcessStartUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PProcessStartUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pProcessStartUser.c_str(), allocator).Move(), allocator);
    }

    if (m_pProcessUserGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PProcessUserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pProcessUserGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_pProcessPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pProcessPath.c_str(), allocator).Move(), allocator);
    }

    if (m_pProcessParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pProcessParam.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessStartUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessStartUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessStartUser.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessUserGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessUserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessUserGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessPath.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessParam.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetSubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetSubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetSubStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIsolateOperationSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerIsolateOperationSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerIsolateOperationSrc.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkPlatform.begin(); itr != m_checkPlatform.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
    }

    if (m_containerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerStatus.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeVirusDetailResponse::GetImageId() const
{
    return m_imageId;
}

bool DescribeVirusDetailResponse::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string DescribeVirusDetailResponse::GetImageName() const
{
    return m_imageName;
}

bool DescribeVirusDetailResponse::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeVirusDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeVirusDetailResponse::GetSize() const
{
    return m_size;
}

bool DescribeVirusDetailResponse::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DescribeVirusDetailResponse::GetFilePath() const
{
    return m_filePath;
}

bool DescribeVirusDetailResponse::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string DescribeVirusDetailResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeVirusDetailResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DescribeVirusDetailResponse::GetVirusName() const
{
    return m_virusName;
}

bool DescribeVirusDetailResponse::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetRiskLevel() const
{
    return m_riskLevel;
}

bool DescribeVirusDetailResponse::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DescribeVirusDetailResponse::GetContainerName() const
{
    return m_containerName;
}

bool DescribeVirusDetailResponse::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetContainerId() const
{
    return m_containerId;
}

bool DescribeVirusDetailResponse::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string DescribeVirusDetailResponse::GetHostName() const
{
    return m_hostName;
}

bool DescribeVirusDetailResponse::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetHostId() const
{
    return m_hostId;
}

bool DescribeVirusDetailResponse::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessName() const
{
    return m_processName;
}

bool DescribeVirusDetailResponse::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessPath() const
{
    return m_processPath;
}

bool DescribeVirusDetailResponse::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessMd5() const
{
    return m_processMd5;
}

bool DescribeVirusDetailResponse::ProcessMd5HasBeenSet() const
{
    return m_processMd5HasBeenSet;
}

uint64_t DescribeVirusDetailResponse::GetProcessId() const
{
    return m_processId;
}

bool DescribeVirusDetailResponse::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessArgv() const
{
    return m_processArgv;
}

bool DescribeVirusDetailResponse::ProcessArgvHasBeenSet() const
{
    return m_processArgvHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessChan() const
{
    return m_processChan;
}

bool DescribeVirusDetailResponse::ProcessChanHasBeenSet() const
{
    return m_processChanHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessAccountGroup() const
{
    return m_processAccountGroup;
}

bool DescribeVirusDetailResponse::ProcessAccountGroupHasBeenSet() const
{
    return m_processAccountGroupHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessStartAccount() const
{
    return m_processStartAccount;
}

bool DescribeVirusDetailResponse::ProcessStartAccountHasBeenSet() const
{
    return m_processStartAccountHasBeenSet;
}

string DescribeVirusDetailResponse::GetProcessFileAuthority() const
{
    return m_processFileAuthority;
}

bool DescribeVirusDetailResponse::ProcessFileAuthorityHasBeenSet() const
{
    return m_processFileAuthorityHasBeenSet;
}

int64_t DescribeVirusDetailResponse::GetSourceType() const
{
    return m_sourceType;
}

bool DescribeVirusDetailResponse::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

vector<string> DescribeVirusDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeVirusDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeVirusDetailResponse::GetHarmDescribe() const
{
    return m_harmDescribe;
}

bool DescribeVirusDetailResponse::HarmDescribeHasBeenSet() const
{
    return m_harmDescribeHasBeenSet;
}

string DescribeVirusDetailResponse::GetSuggestScheme() const
{
    return m_suggestScheme;
}

bool DescribeVirusDetailResponse::SuggestSchemeHasBeenSet() const
{
    return m_suggestSchemeHasBeenSet;
}

string DescribeVirusDetailResponse::GetMark() const
{
    return m_mark;
}

bool DescribeVirusDetailResponse::MarkHasBeenSet() const
{
    return m_markHasBeenSet;
}

string DescribeVirusDetailResponse::GetFileName() const
{
    return m_fileName;
}

bool DescribeVirusDetailResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetFileMd5() const
{
    return m_fileMd5;
}

bool DescribeVirusDetailResponse::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string DescribeVirusDetailResponse::GetEventType() const
{
    return m_eventType;
}

bool DescribeVirusDetailResponse::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string DescribeVirusDetailResponse::GetPodName() const
{
    return m_podName;
}

bool DescribeVirusDetailResponse::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVirusDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVirusDetailResponse::GetSubStatus() const
{
    return m_subStatus;
}

bool DescribeVirusDetailResponse::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

string DescribeVirusDetailResponse::GetHostIP() const
{
    return m_hostIP;
}

bool DescribeVirusDetailResponse::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string DescribeVirusDetailResponse::GetClientIP() const
{
    return m_clientIP;
}

bool DescribeVirusDetailResponse::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string DescribeVirusDetailResponse::GetPProcessStartUser() const
{
    return m_pProcessStartUser;
}

bool DescribeVirusDetailResponse::PProcessStartUserHasBeenSet() const
{
    return m_pProcessStartUserHasBeenSet;
}

string DescribeVirusDetailResponse::GetPProcessUserGroup() const
{
    return m_pProcessUserGroup;
}

bool DescribeVirusDetailResponse::PProcessUserGroupHasBeenSet() const
{
    return m_pProcessUserGroupHasBeenSet;
}

string DescribeVirusDetailResponse::GetPProcessPath() const
{
    return m_pProcessPath;
}

bool DescribeVirusDetailResponse::PProcessPathHasBeenSet() const
{
    return m_pProcessPathHasBeenSet;
}

string DescribeVirusDetailResponse::GetPProcessParam() const
{
    return m_pProcessParam;
}

bool DescribeVirusDetailResponse::PProcessParamHasBeenSet() const
{
    return m_pProcessParamHasBeenSet;
}

string DescribeVirusDetailResponse::GetAncestorProcessStartUser() const
{
    return m_ancestorProcessStartUser;
}

bool DescribeVirusDetailResponse::AncestorProcessStartUserHasBeenSet() const
{
    return m_ancestorProcessStartUserHasBeenSet;
}

string DescribeVirusDetailResponse::GetAncestorProcessUserGroup() const
{
    return m_ancestorProcessUserGroup;
}

bool DescribeVirusDetailResponse::AncestorProcessUserGroupHasBeenSet() const
{
    return m_ancestorProcessUserGroupHasBeenSet;
}

string DescribeVirusDetailResponse::GetAncestorProcessPath() const
{
    return m_ancestorProcessPath;
}

bool DescribeVirusDetailResponse::AncestorProcessPathHasBeenSet() const
{
    return m_ancestorProcessPathHasBeenSet;
}

string DescribeVirusDetailResponse::GetAncestorProcessParam() const
{
    return m_ancestorProcessParam;
}

bool DescribeVirusDetailResponse::AncestorProcessParamHasBeenSet() const
{
    return m_ancestorProcessParamHasBeenSet;
}

string DescribeVirusDetailResponse::GetOperationTime() const
{
    return m_operationTime;
}

bool DescribeVirusDetailResponse::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

string DescribeVirusDetailResponse::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

bool DescribeVirusDetailResponse::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string DescribeVirusDetailResponse::GetContainerNetSubStatus() const
{
    return m_containerNetSubStatus;
}

bool DescribeVirusDetailResponse::ContainerNetSubStatusHasBeenSet() const
{
    return m_containerNetSubStatusHasBeenSet;
}

string DescribeVirusDetailResponse::GetContainerIsolateOperationSrc() const
{
    return m_containerIsolateOperationSrc;
}

bool DescribeVirusDetailResponse::ContainerIsolateOperationSrcHasBeenSet() const
{
    return m_containerIsolateOperationSrcHasBeenSet;
}

vector<string> DescribeVirusDetailResponse::GetCheckPlatform() const
{
    return m_checkPlatform;
}

bool DescribeVirusDetailResponse::CheckPlatformHasBeenSet() const
{
    return m_checkPlatformHasBeenSet;
}

string DescribeVirusDetailResponse::GetFileAccessTime() const
{
    return m_fileAccessTime;
}

bool DescribeVirusDetailResponse::FileAccessTimeHasBeenSet() const
{
    return m_fileAccessTimeHasBeenSet;
}

string DescribeVirusDetailResponse::GetFileModifyTime() const
{
    return m_fileModifyTime;
}

bool DescribeVirusDetailResponse::FileModifyTimeHasBeenSet() const
{
    return m_fileModifyTimeHasBeenSet;
}

string DescribeVirusDetailResponse::GetNodeSubNetID() const
{
    return m_nodeSubNetID;
}

bool DescribeVirusDetailResponse::NodeSubNetIDHasBeenSet() const
{
    return m_nodeSubNetIDHasBeenSet;
}

string DescribeVirusDetailResponse::GetNodeSubNetName() const
{
    return m_nodeSubNetName;
}

bool DescribeVirusDetailResponse::NodeSubNetNameHasBeenSet() const
{
    return m_nodeSubNetNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetNodeSubNetCIDR() const
{
    return m_nodeSubNetCIDR;
}

bool DescribeVirusDetailResponse::NodeSubNetCIDRHasBeenSet() const
{
    return m_nodeSubNetCIDRHasBeenSet;
}

string DescribeVirusDetailResponse::GetClusterID() const
{
    return m_clusterID;
}

bool DescribeVirusDetailResponse::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string DescribeVirusDetailResponse::GetPodIP() const
{
    return m_podIP;
}

bool DescribeVirusDetailResponse::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string DescribeVirusDetailResponse::GetPodStatus() const
{
    return m_podStatus;
}

bool DescribeVirusDetailResponse::PodStatusHasBeenSet() const
{
    return m_podStatusHasBeenSet;
}

string DescribeVirusDetailResponse::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

bool DescribeVirusDetailResponse::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string DescribeVirusDetailResponse::GetNodeType() const
{
    return m_nodeType;
}

bool DescribeVirusDetailResponse::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string DescribeVirusDetailResponse::GetNodeID() const
{
    return m_nodeID;
}

bool DescribeVirusDetailResponse::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string DescribeVirusDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeVirusDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeVirusDetailResponse::GetNamespace() const
{
    return m_namespace;
}

bool DescribeVirusDetailResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeVirusDetailResponse::GetWorkloadType() const
{
    return m_workloadType;
}

bool DescribeVirusDetailResponse::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

string DescribeVirusDetailResponse::GetContainerStatus() const
{
    return m_containerStatus;
}

bool DescribeVirusDetailResponse::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}


